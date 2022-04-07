#pragma once


enum termcolor_style {
    REGULAR,
    BOLD,
    UNDERLINE,
    HI_BG,
    HI_TXT,
    BOLD_HI_TEXT,
    CTRL,
    STYLE_MAX,
};

enum termcolor_color {
    BLACK,
    RED,
    GREEN,
    YELLOW,
    BLUE,
    MAGENTA,
    CYAN,
    WHITE,
    COLOR_MAX,
};


extern
char const * const get_termcolor(enum termcolor_style const, enum termcolor_color const);


