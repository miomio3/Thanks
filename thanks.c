#include "thanks.h"

int main(void)
{
	thanks();
	thanks();
	return (0);
}

void	thanks(void)
{
	int 		fd;
	size_t		len;
	char		*line;

	init();
	fd = open("thanks.txt", O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("fail\n");
		return ;
	}
	len = 0;
	line = create_line(fd, &len);
	printf("%s", line);
	end();
}

int ft_wait(int msec)
{
	struct timespec r;

	r.tv_sec = 0;
	r.tv_nsec = msec * 1000L * 1000L;
	return (nanosleep(&r, NULL));
}