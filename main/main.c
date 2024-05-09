// This project was created using Espressif example (rgb_panel).
// UI for this project was created with SquareLine Studio.
// It was tested with ESP-IDF v5.2

#include "esp_log.h"
#include "WZ8048C070.h"
#include "lvgl.h"
#include "ui/ui.h"

#define TAG "MAIN"

void app_main(void)
{
  WZ8048C070_Init();
  ESP_LOGI(TAG, "Display simple buttons example");
  ui_init(disp);

  while (1) {
    // raise the task priority of LVGL and/or reduce the handler period can
    // improve the performance
    vTaskDelay(pdMS_TO_TICKS(10));
    // The task running lv_timer_handler should have lower priority than that
    // running `lv_tick_inc`
    lv_timer_handler();
  }
}

