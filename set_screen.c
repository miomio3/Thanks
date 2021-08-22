#include "thanks.h"

void	init(void)
{
	clear_screen();
	set_char_color(YELLOW);
	set_back_color(BLACK);
	cursol_off();
}

void	end(void)
{
	set_back_color(DEFAULT);
	set_char_color(DEFAULT);
	cursol_on();
}