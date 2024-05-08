# Elecrow_ESP32_WZ8048C070_ESP_IDF_LVGL_example
An example to show how to use LCD display and touch with LVGL on ESP-IDF framework for Elecrow WZ8048C070 devboard.
Forked from: https://github.com/MMlodzinski/Sunton_ESP32-8048S070c_board

## How to run the example
ESP-IDF is the framework for building the example.
Only ESP-IDF v5.2 was tested.
Using ESP-IDF as Visual Studio Code extension is recommended. When it is installed, please open folder containing this repository in Visual Studio Code and press "ESP-IDF Build, Flash and Monitor" button. It should build and run the example.

## Important notes
The lvgl_macros.h header is used from the root CMakeLists.txt file to setup LVGL custom macros needed to work with ESP-IDF