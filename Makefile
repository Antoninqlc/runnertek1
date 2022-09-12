##
## EPITECH PROJECT, 2021
## B-MUL-100-REN-1-1-myhunter-antonin.quilichini
## File description:
## Makefile
##

SRC =	source/boostrap_runner.c 		\
		source/init_struct.c 			\
		source/redi_init_struct.c 		\
		source/disp_sprite.c 			\
		source/redi_disp_sprite.c 		\
		source/rect.c 					\
		source/jump.c 					\
		source/my_itoa.c 				\
		source/mystrcomp.c 				\
		source/my_strlen.c 				\
		source/my_putstr.c 				\
		source/close_all.c 				\
		source/move_clock.c  			\
		source/option_lauch.c 			\
		source/fill_obstacle.c 			\
		source/colision.c 				\

CFLAGS =	-lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

all: comp fclean

comp:
	gcc -O2 $(SRC) $(CFLAGS) -o my_runner

clean:
	rm -f *.tmp
	rm -f *~
	rm -f ./source/*.tmp
	rm -f ./source/*~

fclean: clean

re: clean all