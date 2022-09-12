/*
** EPITECH PROJECT, 2021
** B-MUL-100-REN-1-1-myrunner-antonin.quilichini
** File description:
** rect.c
*/

#include "../include/my.h"
#include "../include/struct.h"

void move_rect(sfIntRect *rect, int offset, int maxvalue)
{
    if (rect->left + offset >= maxvalue) {
        rect->left = 0;
    } else {
        rect->left = rect->left + offset;
    }
}

void rect_redi(runner_t *runner)
{
    move_rect(&runner->r2.rect_sp1, 2, 1920);
    move_rect(&runner->r2.rect_sp2, 4, 1920);
    move_rect(&runner->r2.rect_sp3, 6, 1920);
    move_rect(&runner->r2.rect_sp4, 8, 1920);
    move_rect(&runner->r2.rect_sp5, 10, 1920);
    move_rect(&runner->r2.rect_sp6, 9, 1920);
    move_rect(&runner->r2.rect_sp7, 11, 1920);
    move_rect(&runner->r2.rect_perso, 100, 500);
}
