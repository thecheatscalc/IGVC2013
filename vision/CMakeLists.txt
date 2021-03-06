cmake_minimum_required(VERSION 2.4.6)
include($ENV{ROS_ROOT}/core/rosbuild/rosbuild.cmake)

find_package(CUDA)
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})


# Set the build type.  Options are:
#  Coverage       : w/ debug symbols, w/o optimization, w/ code-coverage
#  Debug          : w/ debug symbols, w/o optimization
#  Release        : w/o debug symbols, w/ optimization
#  RelWithDebInfo : w/ debug symbols, w/ optimization
#  MinSizeRel     : w/o debug symbols, w/ optimization, stripped binaries
#set(ROS_BUILD_TYPE RelWithDebInfo)

rosbuild_init()

#set the default path for built executables to the "bin" directory
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
#set the default path for built libraries to the "lib" directory
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

#uncomment if you have defined messages
#rosbuild_genmsg()
#uncomment if you have defined services
#rosbuild_gensrv()

#common commands for building c++ executables and libraries
#rosbuild_add_library(${PROJECT_NAME} src/example.cpp)
#target_link_libraries(${PROJECT_NAME} another_library)
#rosbuild_add_boost_directories()
#rosbuild_link_boost(${PROJECT_NAME} thread)
#rosbuild_add_executable(example examples/example.cpp)
#rosbuild_add_executable(vision src/vision_test.cpp)
#rosbuild_add_executable(decision src/vision_decision.cpp)
#rosbuild_add_executable(opencv_cuda_test src/opencv_cuda_test.cpp)
#rosbuild_add_executable(visualization src/visualizer.cpp)

rosbuild_add_executable(hough_lines nodes/hough_lines.cpp)
rosbuild_add_executable(image_combiner nodes/image_combiner.cpp)
#rosbuild_add_executable(image_filter nodes/image_filter.cpp)
#rosbuild_add_executable(hough_lines_gpu nodes/hough_lines_gpu.cpp)
rosbuild_add_executable(thresholder nodes/threshold_maker.cpp)
#rosbuild_add_executable(lane_threshold src/lane_thresh.cpp)
#rosbuild_add_executable(equalize_test prototype/equalize_hist.cpp)
#rosbuild_add_executable(johnny_5 nodes/johnny_5.cpp)
#rosbuild_add_executable(BGR_test prototype/BGR_test.cpp)
#rosbuild_add_executable(lounge src/vision_lounge.cpp)
rosbuild_add_executable(log_polar_processor nodes/log_polar_processor.cpp)
#rosbuild_add_executable(grayscaler nodes/grayscaler.cpp)
#rosbuild_add_executable(lane_detector nodes/lane_detector.cpp)
#rosbuild_add_executable(cpu_vs_gpu src/cpu_vs_gpu_profiler.cpp)

target_link_libraries(hough_lines ${OpenCV_LIBRARIES})
target_link_libraries(image_combiner ${OpenCV_LIBRARIES})
#target_link_libraries(image_filter ${OpenCV_LIBRARIES})
#target_link_libraries(hough_lines_gpu ${OpenCV_LIBRARIES})
target_link_libraries(thresholder ${OpenCV_LIBRARIES})
#target_link_libraries(lane_threshold ${OpenCV_LIBRARIES})
#target_link_libraries(equalize_test ${OpenCV_LIBRARIES})
#target_link_libraries(vision ${OpenCV_LIBRARIES})
#target_link_libraries(johnny_5 ${OpenCV_LIBRARIES})
#target_link_libraries(BGR_test ${OpenCV_LIBRARIES})
#target_link_libraries(lane_detector ${OpenCV_LIBRARIES})
target_link_libraries(log_polar_processor ${OpenCV_LIBRARIES})
#target_link_libraries(grayscaler ${OpenCV_LIBRARIES})
#target_link_libraries(lounge ${OpenCV_LIBRARIES})
#target_link_libraries(cpu_vs_gpu ${OpenCV_LIBRARIES})

