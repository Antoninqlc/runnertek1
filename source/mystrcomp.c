/*
** EPITECH PROJECT, 2021
** B-MUL-100-REN-1-1-myrunner-antonin.quilichini
** File description:
** mystrcomp.c
*/

#include "../include/my.h"
#include "../include/struct.h"

int mystrcomp(char const *str, char const *to_comp)
{
    if (my_strlen(str) != my_strlen(to_comp))
        return 84;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != to_comp[i])
            return 0;
    }
    return 1;
}
