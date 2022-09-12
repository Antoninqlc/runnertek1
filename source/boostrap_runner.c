/*
** EPITECH PROJECT, 2021
** boostrap_runner
** File description:
** boostrap_runner.c
*/

#include "../include/my.h"
#include "../include/struct.h"

void manage_end(runner_t *runner, int place)
{
    runner->r2.r3.end = sfTexture_createFromFile("./hunter/fin.png", NULL);
    runner->r2.r3.sp_end = sfSprite_create();
    sfSprite_setTexture(runner->r2.r3.sp_end, runner->r2.r3.end, sfTrue);
    runner->r2.r3.pos_end.x = (place * 300) + 1920;
    runner->r2.r3.pos_end.y = 0;
}

obstacle_t *analyse_event(runner_t *run, obstacle_t *obstacle)
{
    if (run->event.key.code == sfKeyEscape || run->event.type == sfEvtClosed)
        sfRenderWindow_close(run->window);
    if (run->event.key.code == sfKeySpace) {
        if (run->event.key.type == sfEvtKeyPressed)
            obstacle = jump(run, obstacle);
    }
    if (run->event.key.code == sfKeyM)
        if (run->event.key.type == sfEvtKeyPressed)
            sfMusic_setVolume(run->r2.r3.music, 0);
    if (run->event.key.code == sfKeyV)
        if (run->event.key.type == sfEvtKeyPressed)
            sfMusic_setVolume(run->r2.r3.music, 100);
    return obstacle;
}

int check_arg(char **av, int ac)
{
    if (ac != 2) {
        my_putstr("\tIncorect usage (./my_runner -h for more information)\n");
        return 84;
    }
    if (mystrcomp(av[1], "-h") == 1) {
        h_opt();
        return 84;
    }
    if (mystrcomp(av[1], "-map") == 1) {
        map_opt();
        return 84;
    }
    if (open(av[1], O_RDONLY) == -1) {
        my_putstr("open failed/wrong file\n");
        return 84;
    }
    if (check_map(av[1]) == 84)
        return 84;
}

obstacle_t *init_obstacle(runner_t *runner, obstacle_t *obstacle, char **map)
{
    int fd = open(map[1], O_RDONLY);
    char buff[41];
    int size = 0;

    read(fd, buff, 41);
    for (int i = 0; buff[i] != '\0'; i++) {
        if (buff[i] == '0') {
            size++;
        }
    }
    obstacle = malloc(sizeof(obstacle_t) * (size + 1));
    runner->r2.r3.nb_ob = size;
    size = 0;
    for (int i = 0; buff[i] != '\0'; i++) {
        if (buff[i] == '0') {
            fill_obstacle(&obstacle[size], i);
            size++;
        }
        if (buff[i] == '1')
            manage_end(runner, i);
    }
    return obstacle;
}

int main(int ac, char **av)
{
    runner_t runner;
    obstacle_t *obstacle;

    if (check_arg(av, ac) == 84)
        return 84;
    redi_init_struct(&runner);
    sfRenderWindow_clear(runner.window, sfBlack);
    obstacle = init_obstacle(&runner, obstacle, av);
    while (sfRenderWindow_isOpen(runner.window))  {
        while (sfRenderWindow_pollEvent(runner.window, &runner.event))
        {
            obstacle = analyse_event(&runner, obstacle);
        }
        if (runner.r2.r3.coli == 0) {
            obstacle = redi_disp_sprite(&runner, obstacle);
            rect_redi(&runner);
            move_clock(&runner);
            check_coli(&runner, obstacle);
        }
    }
    close_all_redi(&runner);
}
