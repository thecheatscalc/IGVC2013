#include <ros/ros.h>
#include <image_transport/image_transport.h>
#include <cv_bridge/cv_bridge.h>
#include <sensor_msgs/image_encodings.h>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
//#include <cv.h>
//#include <highgui.h>
#include <iostream>
#include <stdio.h>
#include "opencv2/opencv.hpp"
#include "opencv2/gpu/gpu.hpp"

namespace enc = sensor_msgs::image_encodings;

static const char WINDOW[] = "Image window";

class ImageConverter
{
ros::NodeHandle nh_;
image_transport::ImageTransport it_;
image_transport::Subscriber image_sub_;
image_transport::Publisher image_pub_;

public:
    ImageConverter() : it_(nh_)
    {
        image_pub_ = it_.advertise("out", 1);
        image_sub_ = it_.subscribe("usb_cam/image_raw", 1, &ImageConverter::imageCb, this);

        cv::namedWindow(WINDOW);
    }

    ~ImageConverter()
    {
        cv::destroyWindow(WINDOW);
    }

    void imageCb(const sensor_msgs::ImageConstPtr& msg)
    {
        cv_bridge::CvImagePtr cv_ptr, gray_ptr;
        
        try
        {
            cv_ptr = cv_bridge::toCvCopy(msg, enc::BGR8);
            gray_ptr = cv_bridge::toCvCopy(msg, enc::BGR8);
        }
        catch (cv_bridge::Exception& e)
        {
            ROS_ERROR("cv_bridge exception: %s", e.what());
            return;
        }

        if (cv_ptr->image.rows > 60 && cv_ptr->image.cols > 60)
        {
           cvtColor(cv_ptr->image, gray_ptr->image, CV_BGR2GRAY);
        }    
        
        cv::imshow(WINDOW, gray_ptr->image);
        cv::waitKey(3);

        image_pub_.publish(cv_ptr->toImageMsg());
    }
};


/*
int main(int argc, char** argv)
{
    ros::init(argc, argv, "image_converter");

    ImageConverter ic;
    // cv::namedWindow(WINDOW);
   
    //cv::waitKey(); 
    ros::spin();
    return 0;
}
*/

int main (int argc, char* argv[])
{
    ros::init(argc, argv, "image_converter");
    try
    {
        cv::Mat src_host = cv::imread("TESTIMAGE.jpg", CV_LOAD_IMAGE_GRAYSCALE);
        cv::gpu::GpuMat dst, src;
        src.upload(src_host);

        cv::gpu::threshold(src, dst, 128.0, 255.0, CV_THRESH_TOZERO);

        cv::Mat result_host = (cv::Mat) dst;
        cv::imshow("Result", result_host);
        cv::waitKey();
    }
    catch(const cv::Exception& ex)
    {
        std::cout << "Error: " << ex.what() << std::endl;
    }
    return 0;
}


