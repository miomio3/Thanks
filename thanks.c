#include "thanks.h"

int main(void)
{
	thanks();
	thanks();
	return (0);
}

void	thanks(void)
{
	int			i;
	int 		fd;
	int			f;
	static char	*buf;
	char		*line;

	i = 0;
	f = 1;
	init();
	line = ft_strdup("");
	fd = open("boss.txt", O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("fail\n");
		return ;
	}
	while (f)
	{
		buf = ft_read(fd);
		if (buf == NULL)
			buf = ft_read(fd);
		f = create_line(&buf, &line);
	}
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