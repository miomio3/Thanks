#include "thanks.h"

char	*ft_read(int fd)
{
	char	*buf;

	buf = ft_calloc(BUFF_SIZE + 1, sizeof(char));
	if (buf == NULL)
		return(NULL);
	read(fd, buf, BUFF_SIZE);
	return (buf);
}

void	*ft_calloc(size_t count, size_t size)
{
	char	*p;
	size_t	i;

	i = 0;
	p = malloc(size * count);
	while(i < count * size)
		p[i++] = '\0';
	return (p);
}