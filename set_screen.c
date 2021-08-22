#include "thanks.h"

void	init(void)
{
	clear_screen();
	set_char_color(YELLOW);
	set_back_color(BLACK);
}

void	end(void)
{
	set_back_color(DEFAULT);
	set_char_color(DEFAULT);
}