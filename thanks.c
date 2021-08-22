#include "thanks.h"

int main(void)
{
	thanks();
	return (0);
}

void	thanks(void)
{
	int		i;
	int 	fd;
	int		f;
	char	*buf;
	char	*line;

	i = 0;
	f = 1;
	init();
	fd = open("test.txt", O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("fail\n");
		return ;
	}
	buf = ft_read(fd);
	printf("%s\n", buf);
	if (buf == NULL)
		return ;
	while (f)
		f = create_line(&buf, &line);
	printf("%s\n", line);
	end();
}

int ft_wait(int msec)
{
	struct timespec r;

	r.tv_sec = 0;
	r.tv_nsec = msec * 1000L * 1000L;
	return (nanosleep(&r, NULL));
}