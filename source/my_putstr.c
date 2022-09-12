/*
** EPITECH PROJECT, 2021
** my_putstr.c
** File description:
** e
*/

#include<unistd.h>
#include "../include/my.h"

void my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
}
