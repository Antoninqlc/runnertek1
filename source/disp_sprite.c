/*
** EPITECH PROJECT, 2021
** B-MUL-100-REN-1-1-myrunner-antonin.quilichini
** File description:
** disp_sprite.c
*/

#include "../include/my.h"
#include "../include/struct.h"

obstacle_t *disp_sprite_1(runner_t *run, obstacle_t *obstacle)
{
    sfText_setString(run->r2.text_score, my_itoa(run->r2.score));
    sfText_setPosition(run->r2.text_score, run->r2.text_pos);
    sfSprite_setTextureRect(run->sp_bg2, run->r2.rect_sp2);
    sfSprite_setTextureRect(run->sp_bg4, run->r2.rect_sp4);
    sfSprite_setTextureRect(run->sp_bg3, run->r2.rect_sp3);
    sfSprite_setTextureRect(run->sp_bg5, run->r2.rect_sp5);
    sfSprite_setTextureRect(run->sp_bg6, run->r2.rect_sp6);
    sfSprite_setTextureRect(run->sp_bg7, run->r2.rect_sp7);
    sfSprite_setTextureRect(run->sp_perso, run->r2.rect_perso);
    sfSprite_setPosition(run->sp_perso, run->r2.pos_perso);
    sfSprite_setPosition(run->sp_bg7, run->r2.pos_sol);
    sfText_setPosition(run->r2.text_score,  run->r2.text_pos);
    sfRenderWindow_drawSprite(run->window, run->sp_bg1, NULL);
    sfRenderWindow_drawSprite(run->window, run->sp_bg2, NULL);
    sfRenderWindow_drawSprite(run->window, run->sp_bg4, NULL);
    sfRenderWindow_drawSprite(run->window, run->sp_bg3, NULL);
    sfRenderWindow_drawSprite(run->window, run->sp_bg5, NULL);
    sfRenderWindow_drawSprite(run->window, run->sp_bg6, NULL);
    sfRenderWindow_drawSprite(run->window, run->sp_perso, NULL);
}

obstacle_t *disp_sprite_2(runner_t *run, obstacle_t *obstacle)
{
    sfRenderWindow_drawSprite(run->window, run->sp_bg7, NULL);
    sfRenderWindow_drawSprite(run->window, run->r2.text_sp, NULL);
    sfRenderWindow_drawText(run->window, run->r2.text_score, NULL);
    for (int i = 0; i != run->r2.r3.nb_ob; i++) {
        obstacle[i].pos_ob.x -= 11;
        sfSprite_setPosition(obstacle[i].sp_ob, obstacle[i].pos_ob);
        sfRenderWindow_drawSprite(run->window, obstacle[i].sp_ob, NULL);
    }
    run->r2.r3.pos_end.x -= 11;
    sfSprite_setPosition(run->r2.r3.sp_end, run->r2.r3.pos_end);
    sfRenderWindow_drawSprite(run->window, run->r2.r3.sp_end, NULL);
    sfRenderWindow_display(run->window);
    return obstacle;
}
