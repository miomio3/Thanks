#ifndef TETRIS_H
#define TETRIS_H

#include <stdio.h>
#include <unistd.h>
#include <sys/time.h>
#include <time.h>

#define	clear_screen()		printf("\033[2J");
#define set_char_color(n)	printf("\033[3%dm", n);
#define set_back_color(n)	printf("\033[4%dm", n);
#define set_position(x, y)	printf("\033[%d;%dH", y + 1, x * 2 + 1);
#define set_attribute(n)	printf("\033[%dm", n);
#define cursol_on()			printf("\033[?25h");
#define cursol_off()		printf("\033[?25l");
#define NORMAL				0
#define BLIGHT				1//明るく
#define DIM					2//暗く
#define UNDER_LINE			4//下線
#define BLINK				5//点滅
#define REVERSE				7//反転
#define HIDE				8//見えなくなる
#define STRIKE				9//取り消し線
#define WIDTH				10//
#define HIGHT				20//
#define BLACK				0
#define RED					1
#define GREEN				2
#define YELLOW				3
#define BLUE				4
#define MAGENDA				5
#define CYAN				6
#define WHITE				7
#define DEFAULT				9

int 	wait(int msec);
void	reset(void);
void	initialize(void);

#endif