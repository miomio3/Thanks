#include "tetris.h"

void	initialize(void)
{
	set_char_color(YELLOW);
	set_back_color(BLACK);
	set_attribute(NORMAL);
	clear_screen();
	cursol_off();
}

void	reset(void)
{
	set_char_color(DEFAULT);
	set_back_color(DEFAULT);
	set_attribute(NORMAL);
	clear_screen();
	cursol_on();
}

int wait(int msec)
{
	struct timespec r;

	r.tv_sec = 0;
	r.tv_nsec = msec * 1000L * 1000L;
	return (nanosleep(&r, NULL));
}

int main(void)
{
	int	y;

	y = 0;
	initialize();
	while (y < 10)
	{
		set_position(40, y);
		set_char_color(YELLOW);
		set_back_color(BLACK);
		set_attribute(REVERSE);
		printf("  ");
		fflush(stdout);

		wait(500);

		set_position(40, y);
		set_char_color(YELLOW);
		set_back_color(BLACK);
		set_attribute(NORMAL);
		printf("  ");
		fflush(stdout);
		y++;
	}
	reset();
	return (0);
}
