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
	char	*buf;

	i = 0;
	init();
	fd = open("thanks.txt", O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("fail\n");
		return ;
	}
	buf = ft_read(fd);
	if (buf == NULL)
		return ;
	printf("%s", buf);
	end();
}

int ft_wait(int msec)
{
	struct timespec r;

	r.tv_sec = 0;
	r.tv_nsec = msec * 1000L * 1000L;
	return (nanosleep(&r, NULL));
}