#include<termcolor.h>
#include<iso646.h>


static
char const * const termcolor[STYLE_MAX][COLOR_MAX] = {
    [REGULAR] = {
        [BLACK] = "\e[0;30m",
        [RED] = "\e[0;31m",
        [GREEN] = "\e[0;32m",
        [YELLOW] = "\e[0;33m",
        [BLUE] = "\e[0;34m",
        [MAGENTA] = "\e[0;35m",
        [CYAN] = "\e[0;36m",
        [WHITE] = "\e[0;37m",
    },
    [BOLD] = {
        [BLACK] = "\e[1;30m",
        [RED] = "\e[1;31m",
        [GREEN] = "\e[1;32m",
        [YELLOW] = "\e[1;33m",
        [BLUE] = "\e[1;34m",
        [MAGENTA] = "\e[1;35m",
        [CYAN] = "\e[1;36m",
        [WHITE] = "\e[1;37m",
    },
    [UNDERLINE] = {
        [BLACK] = "\e[4;30m",
        [RED] = "\e[4;31m",
        [GREEN] = "\e[4;32m",
        [YELLOW] = "\e[4;33m",
        [BLUE] = "\e[4;34m",
        [MAGENTA] = "\e[4;35m",
        [CYAN] = "\e[4;36m",
        [WHITE] = "\e[4;37m",
    },
    [HI_BG] = {
        [BLACK] = "\e[0;100m",
        [RED] = "\e[0;101m",
        [GREEN] = "\e[0;102m",
        [YELLOW] = "\e[0;103m",
        [BLUE] = "\e[0;104m",
        [MAGENTA] = "\e[0;105m",
        [CYAN] = "\e[0;106m",
        [WHITE] = "\e[0;107m",
    },
    [HI_TXT] = {
        [BLACK] = "\e[0;90m",
        [RED] = "\e[0;91m",
        [GREEN] = "\e[0;92m",
        [YELLOW] = "\e[0;93m",
        [BLUE] = "\e[0;94m",
        [MAGENTA] = "\e[0;95m",
        [CYAN] = "\e[0;96m",
        [WHITE] = "\e[0;97m",
    },
    [BOLD_HI_TEXT] = {
        [BLACK] = "\e[1;90m",
        [RED] = "\e[1;91m",
        [GREEN] = "\e[1;92m",
        [YELLOW] = "\e[1;93m",
        [BLUE] = "\e[1;94m",
        [MAGENTA] = "\e[1;95m",
        [CYAN] = "\e[1;96m",
        [WHITE] = "\e[1;97m",
    },
    [CTRL] = {
        [BLACK] = "\e[0m",
        [RED] = "\e[0m",
        [GREEN] = "\e[0m",
        [YELLOW] = "\e[0m",
        [BLUE] = "\e[0m",
        [MAGENTA] = "\e[0m",
        [CYAN] = "\e[0m",
        [WHITE] = "\e[0m",
    },
};



char const * const get_termcolor(enum termcolor_style const style,
                                    enum termcolor_color const color) {
    if(style >= 0 and color >= 0
            and style < STYLE_MAX
            and color < COLOR_MAX) {
        return termcolor[style][color];
    } else {
        return "";
    }
}


