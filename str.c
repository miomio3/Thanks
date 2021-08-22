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
	while (&buf[i] != p && buf[i])
		i++;
	string = malloc(sizeof(char) * (i + 1));
	i = 0;
	while (buf != p + 1)
	{
		string[i] = *buf;
		buf++;
		i++;
	}
	string[i] = '\0';
	return (string);
}

char	*ft_strdup(char *buf)
{
	return (ft_substr(buf, &buf[ft_strlen(buf) - 1]));
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*p;
	size_t	i;

	p = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)));
	i = 0;
	while (*s1)
	{
		p[i++] = *s1;
		s1++;
	}
	while (*s2)
	{
		p[i++] = *s2;
		s2++;
	}
	p[i] = '\0';
	return (p);
}