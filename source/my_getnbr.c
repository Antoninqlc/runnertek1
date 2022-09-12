/*
** EPITECH PROJECT, 2021
** my_getnbr.c
** File description:
** s
*/

#include <stdio.h>

int my_getnbr(char *str)
{
    int i = 0;
    int rep = 0;

    for (; str[i] != '\n'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            rep = rep + str[i] - 48;
            rep = rep * 10;
        }
    }
    rep = rep / 10;
    return rep;
}
