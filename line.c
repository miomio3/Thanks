#include "thanks.h"

char	*create_line(int fd, size_t *len)
{
	char	*tmp;
	char	*tmp2;
	char	*line;

	line = ft_strdup("");
	while (1)
	{
		tmp = get_next_line(fd);
		if (tmp == NULL)
			break;
		*len = *len + 1;
		tmp2 = ft_strjoin(line ,tmp);
		free(line);
		free(tmp);
		line = tmp2;
	}
	return(line);
}