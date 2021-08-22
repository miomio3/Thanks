#include "thanks.h"

char	*ft_strchr(char *buf, char n)
{
	while (*buf)
	{
		if (*buf == n)
			return (buf);
		buf++;
	}
	return (NULL);
}

char	*ft_substr(char *buf, char *p)
{
	size_t	i;
	char	*string;

	i = 0;
	while (&buf[i] != p)
		i++;
	string = malloc(sizeof(char) * (i + 1));
	while (buf != p + 1)
	{
		*string = *buf;
		buf++;
		string++;
	}
	*string = '\0';
	return (string);
}

char	*ft_strdup(char *buf)
{
	return (ft_substr(buf, &buf[ft_strlen(buf) - 1]));
}

int	create_line(char **buf, char **line)
{
	char	*p;

	p = ft_strchr(*buf, '\n');
	if (p != NULL)
	{
		ft_strdup(p + 1);
		*line = ft_substr(*buf, p);
		return (STOP);
	}
	else
	{
		*line = ft_strdup(*buf);
		return (CONTINUE);
	}
}