/*
** EPITECH PROJECT, 2021
** B-MUL-100-REN-1-1-myrunner-antonin.quilichini
** File description:
** fill_obstacle.c
*/

#include "../include/my.h"
#include "../include/struct.h"

void fill_obstacle(obstacle_t *obstacle, int pos)
{
    obstacle->ob = sfTexture_createFromFile("./hunter/mechant.png", NULL);
    obstacle->sp_ob = sfSprite_create();
    sfSprite_setTexture(obstacle->sp_ob, obstacle->ob, sfTrue);
    obstacle->pos_ob.x = (pos * 300) + 1920;
    obstacle->pos_ob.y = 800;
}