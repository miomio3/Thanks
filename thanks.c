#include "thanks.h"

int main(void)
{
	thanks();
	return (0);
}

void	thanks(void)
{
	int 		fd;
	size_t		len;
	char		*line;
	int			line2[LINE_1][LINE_2];
	int			i;
	int			j;

	init();
	fd = open("thanks.txt", O_RDONLY);
	if(fd == -1)
	{
		printf("fail\n");
		return ;
	}
	len = 0;
	line = create_line(fd, &len);
	init_line2(line2);
	create_line2(line, line2);
	set_attribute(REVERSE);
	print_thanks(line2);
	print_boss();
	end();
}

int ft_wait(int msec)
{
	struct timespec r;

	r.tv_sec = 0;
	r.tv_nsec = msec * 1000L * 1000L;
	return (nanosleep(&r, NULL));
}