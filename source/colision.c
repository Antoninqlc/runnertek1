/*
** EPITECH PROJECT, 2021
** B-MUL-100-REN-1-1-myrunner-antonin.quilichini
** File description:
** colision.c
*/

#include "../include/my.h"
#include "../include/struct.h"

void check_coli(runner_t *runner, obstacle_t *obstacle)
{
    runner->r2.pos_perso.y += 100;
    for (int i = 0; i != runner->r2.r3.nb_ob; i++) {
        if ((runner->r2.pos_perso.x >= obstacle[i].pos_ob.x &&
        runner->r2.pos_perso.x <= obstacle[i].pos_ob.x + 100 ||
        runner->r2.pos_perso.x + 100 >= obstacle[i].pos_ob.x &&
        runner->r2.pos_perso.x + 100 <= obstacle[i].pos_ob.x + 100) &&
        (runner->r2.pos_perso.y >= obstacle[i].pos_ob.y &&
        runner->r2.pos_perso.y <= obstacle[i].pos_ob.y + 80 ||
        runner->r2.pos_perso.y + 500 >= obstacle[i].pos_ob.y &&
        runner->r2.pos_perso.y + 500 <= obstacle[i].pos_ob.y + 80))
            sfRenderWindow_close(runner->window);
    }
    if (runner->r2.pos_perso.x > runner->r2.r3.pos_end.x) {
        my_putstr("\t\t\tbien jouej\n");
        sfRenderWindow_close(runner->window);
    }
    runner->r2.pos_perso.y -= 100;
}