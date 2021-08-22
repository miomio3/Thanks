#include "thanks.h"

int	create_line(char **buf, char **line)
{
	char	*p;
	char	*tmp1;
	char	*tmp2;

	p = ft_strchr(*buf, '\n');
	if (p != NULL)
	{
		tmp1 = ft_substr(*buf, p);
		tmp2 = ft_strjoin(*line, tmp1);
		free(*line);
		free(tmp1);
		*line = tmp2;
		return (STOP);
	}
	else
	{
		tmp1 = ft_strdup(*buf);
		tmp2 = ft_strjoin(*line, tmp1);
		free(*line);
		free(tmp1);
		*line = tmp2;
		return (CONTINUE);
	}
}