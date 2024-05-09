#ifndef WZ8048C070_H
#define WZ8048C070_H

#include "sdkconfig.h"
#include "driver/gpio.h"
#include "esp_err.h"
#include "esp_lcd_panel_ops.h"
#include "esp_lcd_panel_rgb.h"
#include "esp_log.h"
#include "esp_timer.h"
#include "freertos/FreeRTOS.h"
#include "freertos/semphr.h"
#include "freertos/task.h"
#include "lvgl.h"

#include <stdio.h>

#if CONFIG_LCD_TOUCH_ENABLED
#include "driver/i2c.h"
#include "esp_lcd_touch_gt911.h"
#endif

extern lv_disp_t *disp;

void WZ8048C070_Init();

#endif // WZ8048C070_H