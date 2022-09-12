/*
** EPITECH PROJECT, 2021
** B-MUL-100-REN-1-1-myrunner-antonin.quilichini
** File description:
** jump.c
*/

#include "../include/my.h"
#include "../include/struct.h"

void clock_jump(runner_t *runner)
{
    runner->r2.time = sfClock_getElapsedTime(runner->r2.clock);
    runner->r2.seconds = runner->r2.time.microseconds / 100000.0;
    if (runner->r2.seconds > 2) {
        runner->r2.score++;
        sfClock_restart(runner->r2.clock);
    }
}

obstacle_t *jump(runner_t *runner, obstacle_t *obstacle)
{
    sfMusic_stop(runner->r2.r3.jump);
    sfMusic_play(runner->r2.r3.jump);
    while (runner->r2.pos_perso.y > 400) {
        runner->r2.pos_perso.y -= 20;
        clock_jump(runner);
        obstacle = redi_disp_sprite(runner, obstacle);
        rect_redi(runner);
        check_coli(runner, obstacle);
    }
    while (runner->r2.pos_perso.y != 700) {
        runner->r2.pos_perso.y += 20;
        clock_jump(runner);
        obstacle = redi_disp_sprite(runner, obstacle);
        rect_redi(runner);
        check_coli(runner, obstacle);
    }
    return obstacle;
}
