/*
 * gui.h
 *
 */

#ifndef GUI_H_
#define GUI_H_

#define GUI_BUTTON(button, action)  if(button){button = 0; action;}

#define GUI_DROPDOWN(dropdown, action){                                         \
                                        static int prev_dropdown = 0;           \
                                        if(prev_dropdown != ((int)dropdown))    \
                                        {                                       \
                                            prev_dropdown = (int)dropdown;      \
                                            action;                             \
                                        }                                       \
                                      }

enum gui_options_t
{
    option0,
    option1,
    option2,
    option3
};

union gui_leds_t
{
    unsigned int all;
    struct leds
    {
        unsigned int LED1:1;
        unsigned int LED2:1;
        unsigned int LED3:1;
        unsigned int LED4:1;
        unsigned int LED5:1;
    }bit;
};

union gui_radio_group_t
{
    unsigned int all;
    struct options
    {
        unsigned int RADIO1:1;
        unsigned int RADIO2:1;
        unsigned int RADIO3:1;
        unsigned int RADIO4:1;
    }bit;
};

struct gui_controls_t
{
    int button_start;
    int button_stop;
    char *user_message;
    enum gui_options_t option;
    union gui_radio_group_t radio;
};

struct gui_indicators_t
{
    char *report;
    union gui_leds_t led;
};

struct gui_t
{
    struct gui_controls_t control;
    struct gui_indicators_t indicator;
};


extern struct gui_t gui;

void gui_init(struct gui_t *self);

#endif /* GUI_H_ */
