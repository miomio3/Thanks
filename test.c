#include <stdio.h>
#include <unistd.h>
#include <sys/time.h>
#include <time.h>

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

int wait(int msec);

int main(void)
{
	int	i;

	i = 0;
	clear_screen();
	set_char_color(YELLOW);
	set_back_color(BLACK);
	while (i < 10)
	{
		set_position(i,70);
		printf("BOSS\n");
		fflush(stdout);
		clear_screen();
		wait(500);
		i++;
	}
	set_back_color(DEFAULT);
	set_char_color(DEFAULT);
	return (0);
}

int wait(int msec)
{
	struct timespec r;

	r.tv_sec = 0;
	r.tv_nsec = msec * 1000L * 1000L;
	return (nanosleep(&r, NULL));
}