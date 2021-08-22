#include "thanks.h"

char	*ft_read(int fd)
{
	char	*buf;

	buf = malloc(sizeof(char) * BUFF_SIZE);
	if (buf == NULL)
		return(NULL);
	read(fd, buf, BUFF_SIZE);
	return (buf);
}