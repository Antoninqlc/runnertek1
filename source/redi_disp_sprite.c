/*
** EPITECH PROJECT, 2021
** B-MUL-100-REN-1-1-myrunner-antonin.quilichini
** File description:
** redi_disp_sprite.c
*/

#include "../include/my.h"
#include "../include/struct.h"

obstacle_t *redi_disp_sprite(runner_t *runner, obstacle_t *obstacle)
{
    disp_sprite_1(runner, obstacle);
    obstacle = disp_sprite_2(runner, obstacle);
    return obstacle;
}
