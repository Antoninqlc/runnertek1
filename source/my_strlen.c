/*
** EPITECH PROJECT, 2021
** my_strlen.c
** File description:
** s
*/

#include<unistd.h>

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}
