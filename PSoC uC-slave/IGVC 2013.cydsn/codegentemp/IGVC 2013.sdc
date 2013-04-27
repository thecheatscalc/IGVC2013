# THIS FILE IS AUTOMATICALLY GENERATED
# Project: C:\Users\Frank\Documents\PSoC Creator\IGVC2013\PSoC uC-slave\IGVC 2013.cydsn\IGVC 2013.cyprj
# Date: Sat, 20 Apr 2013 13:03:52 GMT
#set_units -time ns
create_clock -name {ClockBlock/clk_bus} -period 30.3030303030303 -waveform {0 15.1515151515152} [get_pins {ClockBlock/clk_bus}]
create_clock -name {ClockBlock/dclk_0} -period 484.84848484848482 -waveform {0 242.424242424242} [get_pins {ClockBlock/dclk_0}]
create_clock -name {ClockBlock/dclk_1} -period 166.66666666666666 -waveform {0 83.3333333333333} [get_pins {ClockBlock/dclk_1}]
create_clock -name {ClockBlock/dclk_2} -period 166.66666666666666 -waveform {0 83.3333333333333} [get_pins {ClockBlock/dclk_2}]
create_clock -name {ClockBlock/dclk_3} -period 625 -waveform {0 312.5} [get_pins {ClockBlock/dclk_3}]
create_clock -name {CyILO} -period 10000 -waveform {0 5000} [list [get_pins {ClockBlock/ilo}] [get_pins {ClockBlock/clk_100k}] [get_pins {ClockBlock/clk_1k}] [get_pins {ClockBlock/clk_32k}]]
create_clock -name {CyXTAL} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/xtal}]]
create_generated_clock -name {CyIMO} -source [get_pins {ClockBlock/xtal}] -duty_cycle 50 [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyPLL_OUT} -period 30.3030303030303 -waveform {0 15.1515151515152} [list [get_pins {ClockBlock/pllout}]]
create_clock -name {CyMASTER_CLK} -period 30.3030303030303 -waveform {0 15.1515151515152} [list [get_pins {ClockBlock/clk_sync}]]
create_generated_clock -name {PWM_Clock} -source [get_pins {ClockBlock/clk_sync}] -divide_by 16 -duty_cycle 50 [list [get_pins {ClockBlock/dclk_glb_0}]]
create_generated_clock -name {Clock_1} -source [get_pins {ClockBlock/clk_sync}] -edges {1 5 11} -nominal_period 166.66666666666666 [list [get_pins {ClockBlock/dclk_glb_1}]]
create_generated_clock -name {Clock_2} -source [get_pins {ClockBlock/clk_sync}] -edges {1 5 11} -nominal_period 166.66666666666666 [list [get_pins {ClockBlock/dclk_glb_2}]]
create_generated_clock -name {I2C_IntClock} -source [get_pins {ClockBlock/clk_sync}] -divide_by 20 -duty_cycle 50 -nominal_period 625 [list [get_pins {ClockBlock/dclk_glb_3}]]
create_generated_clock -name {CyBUS_CLK} -source [get_pins {ClockBlock/clk_sync}] -duty_cycle 50 [list [get_pins {ClockBlock/clk_bus_glb}]]

set_false_path -from [get_pins {__ONE__/q}]

# Component constraints for C:\Users\Frank\Documents\PSoC Creator\IGVC2013\PSoC uC-slave\IGVC 2013.cydsn\TopDesign\TopDesign.cysch
# Project: C:\Users\Frank\Documents\PSoC Creator\IGVC2013\PSoC uC-slave\IGVC 2013.cydsn\IGVC 2013.cyprj
# Date: Sat, 20 Apr 2013 13:03:31 GMT
