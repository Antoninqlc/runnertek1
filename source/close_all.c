/*
** EPITECH PROJECT, 2021
** B-MUL-100-REN-1-1-myrunner-antonin.quilichini
** File description:
** close_all.c
*/
#include "../include/my.h"
#include "../include/struct.h"

void close_all_1(runner_t *runner)
{
    sfMusic_destroy(runner->r2.r3.jump);
    sfMusic_destroy(runner->r2.r3.music);
}

void close_all_redi(runner_t *runner)
{
    close_all_1(runner);
    sfRenderWindow_destroy(runner->window);
}
