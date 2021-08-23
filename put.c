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
			print_thanks2(line2, j);
			i++;
		}
		fflush(stdout);
		ft_wait(500);
		if(j == LINE_1)
			ft_wait(500);
		clear_screen();
		i= 0;
		j++;
	}
}

void	print_thanks2(int line2[LINE_1][LINE_2], int line1)
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

void	print_boss0(void)
{
	set_char_color(WHITE);
	set_back_color(BLACK);
	set_position(7, 60);
	set_attribute(NORMAL);
	printf("BOSS");
	fflush(stdout);
	ft_wait(700);
	clear_screen();
}

void	print_boss(void)
{
	int		fd;
	char	*line;
	int		line2[LINE_1][LINE_2];
	size_t	len;
	int		i;

	print_boss0();
	set_attribute(REVERSE);
	fd = open("boss.txt", O_RDONLY);
	if(fd == -1)
	{
		printf("fail\n");
		return ;
	}
	len = 0;
	line = create_line(fd, &len);
	init_line2(line2);
	create_line2(line, line2);
	print_boss2(line2);
	fflush(stdout);
	ft_wait(500);
	free(line);
}

void	print_boss2(int line2[LINE_1][LINE_2])
{
	int	i;
	int	j;

	i = 0;
	while(i <= LINE_1)
	{
		j = 0;
		while(line2[i][j])
		{
			set_position(i, line2[i][j]);
			printf(" ");
			j++;
		}
		i++;
	}
}