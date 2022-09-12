/*
** EPITECH PROJECT, 2021
** B-MUL-100-REN-1-1-myrunner-antonin.quilichini
** File description:
** move_clock.c
*/

#include "../include/my.h"
#include "../include/struct.h"

void move_clock(runner_t *runner)
{
    runner->r2.time = sfClock_getElapsedTime(runner->r2.clock);
    runner->r2.seconds = runner->r2.time.microseconds / 100000.0;
    if (runner->r2.seconds > 2) {
        runner->r2.score++;
        sfClock_restart(runner->r2.clock);
    }
}
