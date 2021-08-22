#include "thanks.h"

void	print_thanks(int line2[LINE_1][LINE_2])
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while(j <= LINE_1)
	{
		while(i < j)
		{
			print_line(line2, i);
			i++;
		}
		fflush(stdout);
		ft_wait(500);
		clear_screen();
		i= 0;
		j++;
	}
}

void	print_line(int line2[LINE_1][LINE_2], int line1)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while(i <= line1)
	{
		j = 0;
		while(line2[LINE_1 - i][j])
		{
			set_position(line1 - i, line2[LINE_1 - i][j]);
			printf(" ");
			j++;
		}
		i++;
	}
}