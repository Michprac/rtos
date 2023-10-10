/*
 * gui.c
 */

#include "gui.h"

#define STRING_SIZE 100

struct gui_t gui;

char user_message[STRING_SIZE] = "Hello!";
char report[STRING_SIZE] = "test report";


void gui_init(struct gui_t *self)
{
    self->control.button_start = 0;
    self->control.button_stop = 0;

    self->control.user_message = user_message;
    self->indicator.report = report;

    self->control.option = option0;

    self->indicator.led.all = 0;
    self->control.radio.all = 0;
}
