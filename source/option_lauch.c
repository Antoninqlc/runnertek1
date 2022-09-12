/*
** EPITECH PROJECT, 2021
** B-MUL-100-REN-1-1-myrunner-antonin.quilichini
** File description:
** option_lauch.c
*/

#include "../include/my.h"

void h_opt(void)
{
    my_putstr("RUNNER GAME\n\nUSAGE\n  ./my_runner map.txt\n\n\nOPTION\n");
    my_putstr("\n -h\t\tdisplay info about the game\n-map\t\tdisplay map");
    my_putstr(" exemple\n\nHOW TO PLAY\n\n SPACE TO JUMP\n M TO MUTE\n");
    my_putstr(" V TO UNMUTE\n");
}

void map_opt(void)
{
    my_putstr("MAP EXEMPLE\n\t");
    my_putstr("\t[start]           0   0 0   0   0    0     1\n");
    my_putstr("\n 0 = enemies\n 1 = end\n\n\n\tTHE MAP MUST CONTAIN 40 CH");
    my_putstr("ARACTERs OR BELLOW AND MUST CONTAIN ONE END (./my_runner -map");
    my_putstr(")\n");
}

int check_size(char *filepath)
{
    int fd = open(filepath, O_RDONLY);
    char buff[41];

    read(fd, buff, 41);
    for (int i = 0; i != 41; i++) {
        if (buff[i] == '\0')
            return 0;
    }
    return 84;
}

int check_end(char *filepath)
{
    int fd = open(filepath, O_RDONLY);
    char buff[41];
    int nb = 0;

    read(fd, buff, 41);
    for (int i = 0; i != 41; i++) {
        if (buff[i] == '1')
            nb++;
        if (nb > 1)
            return -1;
    }
    if (nb = 1)
        return 0;
    return 84;
}

int check_map(char *filepath)
{
    if (check_size(filepath) == 84) {
        my_putstr("wrong size\n");
        return 84;
    }
    if (check_end(filepath) == 84) {
        my_putstr("no end\n");
        return 84;
    }
    if (check_end(filepath) == -1) {
        my_putstr("multiple end\n");
        return 84;
    }
}