/*
 * Konrad Korzeniowski
 * Maciej Szy³ak
 * Mikhail Bahuslauski
 * */

#include "gui.h"

//struct gui_t gui;

void start_action()
{
    gui.indicator.report = "device started";
    gui.indicator.led.bit.LED1 = 1;
}

void stop_action()
{
    gui.indicator.report = "device stopped";
    gui.indicator.led.bit.LED1 = 0;
}

void gui_option()
{
    switch(gui.control.option)
    {
    case option0:
        gui.indicator.report = "device option 0";
        break;
    case option1:
        gui.indicator.report = "device option 1";
            break;
    case option2:
        gui.indicator.report = "device option 2";
            break;
    case option3:
        gui.indicator.report = "device option 3";
            break;
    }
}


int main(void)
{
    gui_init(&gui);
    for(;;)
    {
        GUI_BUTTON(gui.control.button_start, start_action());
        GUI_BUTTON(gui.control.button_stop, stop_action());

        GUI_DROPDOWN(gui.control.option, gui_option());
        GUI_DROPDOWN(gui.control.option, gui_option());
    }
}

