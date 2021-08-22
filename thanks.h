#ifndef TETRIS_H
#define TETRIS_H

#include <stdio.h>
#include <unistd.h>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <time.h>
#include <stdlib.h>

#define BUFF_SIZE			100
#define	clear_screen()		printf("\033[2J");
#define set_char_color(n)	printf("\033[3%dm", n);
#define set_back_color(n)	printf("\033[4%dm", n);
#define set_position(x, y)	printf("\033[%d;%dH", x, y);
#define BLACK				0
#define RED					1
#define GREEN				2
#define YELLOW				3
#define BLUE				4
#define MAGENDA				5
#define CYAN				6
#define WHITE				7
#define DEFAULT				9

int 	ft_wait(int msec);
char	*ft_read(int fd);
void	end(void);
void	init(void);
void	ft_putstr(char *s);
size_t	ft_strlen(char *s);
void	thanks(void);

#endif