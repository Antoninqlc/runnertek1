/*
** EPITECH PROJECT, 2021
** B-MUL-100-REN-1-1-myrunner-antonin.quilichini
** File description:
** init_struct.c
*/

#include "../include/struct.h"
#include "../include/my.h"

void init_struct_1(runner_t *run)
{
    run->mode.width = 1920;
    run->mode.height = 1080;
    run->mode.bitsPerPixel = 32;
    run->window = sfRenderWindow_create(run->mode, "run", PARAM, NULL);
    run->bg1 = sfTexture_createFromFile("./hunter/ciel.png", NULL);
    run->bg2 = sfTexture_createFromFile("./hunter/gros_nuage.png", NULL);
    run->bg3 = sfTexture_createFromFile("./hunter/petit_nuage.png", NULL);
    run->bg4 = sfTexture_createFromFile("./hunter/grosse_montagne.png", NULL);
    run->bg5 = sfTexture_createFromFile("./hunter/petite_montagne.png", NULL);
    run->bg6 = sfTexture_createFromFile("./hunter/arbre.png", NULL);
    run->bg7 = sfTexture_createFromFile("./hunter/sol.png", NULL);
    run->perso = sfTexture_createFromFile("./hunter/personnage.png", NULL);
    run->sp_bg1 = sfSprite_create();
    run->sp_bg2 = sfSprite_create();
    run->sp_bg3 = sfSprite_create();
    run->sp_bg4 = sfSprite_create();
    run->sp_bg5 = sfSprite_create();
    run->sp_bg6 = sfSprite_create();
    run->sp_bg7 = sfSprite_create();
    run->sp_perso = sfSprite_create();
}

void init_struct_2(runner_t *run)
{
    sfSprite_setTexture(run->sp_bg1, run->bg1, sfTrue);
    sfSprite_setTexture(run->sp_bg2, run->bg2, sfTrue);
    sfSprite_setTexture(run->sp_bg3, run->bg3, sfTrue);
    sfSprite_setTexture(run->sp_bg4, run->bg4, sfTrue);
    sfSprite_setTexture(run->sp_bg5, run->bg5, sfTrue);
    sfSprite_setTexture(run->sp_bg6, run->bg6, sfTrue);
    sfSprite_setTexture(run->sp_bg7, run->bg7, sfTrue);
    sfSprite_setTexture(run->sp_perso, run->perso, sfTrue);
    run->r2.rect_sp1.top = 0;
    run->r2.rect_sp1.left = 0;
    run->r2.rect_sp1.width = 1920;
    run->r2.rect_sp1.height = 1080;
    run->r2.rect_sp2.top = 0;
    run->r2.rect_sp2.left = 0;
    run->r2.rect_sp2.width = 1920;
    run->r2.rect_sp2.height = 1080;
    run->r2.rect_sp3.top = 0;
    run->r2.rect_sp3.left = 0;
    run->r2.rect_sp3.width = 1920;
    run->r2.rect_sp3.height = 1080;
}

void init_struct_3(runner_t *run)
{
    run->r2.rect_sp4.top = 0;
    run->r2.rect_sp4.left = 0;
    run->r2.rect_sp4.width = 1920;
    run->r2.rect_sp4.height = 1080;
    run->r2.rect_sp5.top = 0;
    run->r2.rect_sp5.left = 0;
    run->r2.rect_sp5.width = 1920;
    run->r2.rect_sp5.height = 1080;
    run->r2.rect_sp6.top = 0;
    run->r2.rect_sp6.left = 0;
    run->r2.rect_sp6.width = 1920;
    run->r2.rect_sp6.height = 1080;
    run->r2.rect_sp7.top = 0;
    run->r2.rect_sp7.left = 0;
    run->r2.rect_sp7.width = 1920;
    run->r2.rect_sp7.height = 1080;
    run->r2.rect_perso.left = 0;
    run->r2.rect_perso.top = 0;
    run->r2.rect_perso.height = 100;
    run->r2.rect_perso.width = 100;
}
void init_struct_4(runner_t *run)
{
    run->r2.pos_perso.x = 20;
    run->r2.pos_perso.y = 700;
    run->r2.scale.x = 2;
    run->r2.scale.y = 2;
    run->r2.pos_sol.x = 0;
    run->r2.pos_sol.y = -25;
    sfSprite_setTextureRect(run->sp_bg1, run->r2.rect_sp1);
    sfSprite_setTextureRect(run->sp_bg2, run->r2.rect_sp2);
    sfSprite_setTextureRect(run->sp_bg4, run->r2.rect_sp4);
    sfSprite_setTextureRect(run->sp_bg3, run->r2.rect_sp3);
    sfSprite_setTextureRect(run->sp_bg5, run->r2.rect_sp5);
    sfSprite_setTextureRect(run->sp_bg6, run->r2.rect_sp6);
    sfSprite_setTextureRect(run->sp_bg7, run->r2.rect_sp7);
    sfSprite_setTextureRect(run->sp_perso, run->r2.rect_perso);
    sfSprite_setScale(run->sp_perso, run->r2.scale);
    run->r2.text = sfTexture_createFromFile("./hunter/score.png", NULL);
    run->r2.text_sp = sfSprite_create();
    sfSprite_setTexture(run->r2.text_sp, run->r2.text, sfTrue);
    run->r2.text_score = sfText_create();
    run->r2.r3.font = sfFont_createFromFile("./include/aie.TTF");
}

void init_struct_5(runner_t *run)
{
    sfText_setFont(run->r2.text_score, run->r2.r3.font);
    sfText_setColor(run->r2.text_score, sfBlack);
    sfText_setCharacterSize(run->r2.text_score, 100);
    run->r2.text_pos.x = 300;
    run->r2.r3.jump = sfMusic_createFromFile("./hunter/jump.ogg");
    run->r2.clock = sfClock_create();
    sfRenderWindow_setFramerateLimit(run->window, 30);
    run->r2.r3.music = sfMusic_createFromFile("./hunter/music.ogg");
    run->r2.r3.music_t.microseconds = 13000000.0;
    sfMusic_setPlayingOffset(run->r2.r3.music, run->r2.r3.music_t);
    sfMusic_setLoop(run->r2.r3.music, sfTrue);
    sfMusic_play(run->r2.r3.music);
    run->r2.r3.coli = 0;
    run->r2.r3.is_jump = 0;
}
