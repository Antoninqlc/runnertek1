/*
** EPITECH PROJECT, 2021
** boostrap_runner
** File description:
** struct.h
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <SFML/Audio.h>
#include <SFML/Audio/SoundStatus.h>
#include <SFML/Audio/Types.h>
#include <SFML/System/InputStream.h>
#include <SFML/System/Time.h>
#include <SFML/System/Vector3.h>
#include <stddef.h>
#include <fcntl.h>
#pragma once

#define PARAM (sfResize | sfClose)

typedef struct obstacle_st
{
    sfSprite *sp_ob;
    sfTexture *ob;
    sfVector2f pos_ob;
    sfIntRect rect;
    int jej;
} obstacle_t;

typedef struct runner_st_3
{
    sfFont *font;
    sfMusic *jump;
    sfMusic *music;
    sfTime music_t;
    int nb_ob;
    int coli;
    int is_jump;
    sfSprite *sp_end;
    sfTexture *end;
    sfVector2f pos_end;
} runner_t_3;

typedef struct runner_st_2
{
    sfVector2f pos_perso;
    sfIntRect rect_sp1;
    sfIntRect rect_sp2;
    sfIntRect rect_sp3;
    sfIntRect rect_sp4;
    sfIntRect rect_sp5;
    sfIntRect rect_sp6;
    sfIntRect rect_sp7;
    sfIntRect rect_perso;
    sfVector2f scale;
    sfVector2f pos_sol;
    sfClock *clock;
    sfTime time;
    float seconds;
    int score;
    sfSprite *text_sp;
    sfTexture *text;
    sfText *text_score;
    sfVector2f text_pos;
    runner_t_3 r3;
} runner_t_2;

typedef struct runner_st
{
    sfRenderWindow *window;
    sfVideoMode mode;
    sfEvent event;
    sfSprite *sp_bg1;
    sfSprite *sp_bg2;
    sfSprite *sp_bg3;
    sfSprite *sp_bg4;
    sfSprite *sp_bg5;
    sfSprite *sp_bg6;
    sfSprite *sp_bg7;
    sfSprite *sp_perso;
    sfTexture *bg1;
    sfTexture *bg2;
    sfTexture *bg3;
    sfTexture *bg4;
    sfTexture *bg5;
    sfTexture *bg6;
    sfTexture *bg7;
    sfTexture *perso;
    runner_t_2 r2;
} runner_t;
