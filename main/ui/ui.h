#ifndef UI_H
#define UI_H

#include "lvgl.h"
#include "ui_helpers.h"

// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
extern lv_obj_t *ui_Screen1;
extern lv_obj_t *ui_Button1;
extern lv_obj_t *ui_Button2;
extern lv_obj_t *ui_Button3;
extern lv_obj_t *ui_Button4;
extern lv_obj_t *ui_Button5;
extern lv_obj_t *ui____initial_actions0;

void ui_init(lv_disp_t *);

#endif // UI_H
