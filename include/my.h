/*
** EPITECH PROJECT, 2021
** B-MUL-100-REN-1-1-myrunner-antonin.quilichini
** File description:
** my.h
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
#include "struct.h"

void my_putstr(char const *str);
int my_strlen(char const *str);
int mystrcomp(char const *str, char const *to_comp);
char *my_itoa(int nb);
void init_struct_1(runner_t *run);
void init_struct_2(runner_t *run);
void init_struct_3(runner_t *run);
void init_struct_4(runner_t *run);
void init_struct_5(runner_t *run);
void redi_init_struct(runner_t *run);
obstacle_t *disp_sprite_1(runner_t *run, obstacle_t *obstacle);
obstacle_t *disp_sprite_2(runner_t *run, obstacle_t *obstacle);
obstacle_t *redi_disp_sprite(runner_t *runner, obstacle_t *obstacle);
void move_rect(sfIntRect *rect, int offset, int maxvalue);
void rect_redi(runner_t *runner);
obstacle_t *jump(runner_t *runner, obstacle_t *obstacle);
void close_all_redi(runner_t *runner);
void close_all_1(runner_t *runner);
void close_all_2(runner_t *runner);
void move_clock(runner_t *runner);
void h_opt(void);
void map_opt(void);
int my_getnbr(char *str);
int check_size(char *filepath);
int check_map(char *filepath);
int check_end(char *filepath);
void fill_obstacle(obstacle_t *obstacle, int pos);
void check_coli(runner_t *runner, obstacle_t *obstacle);
