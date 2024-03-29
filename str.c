#include "thanks.h"


char	*ft_strdup(const char *src)
{
	char	*dest;
	size_t	i;

	dest = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_substr(char const *s, const char *s1)
{
	char	*p;
	size_t	i;
	size_t	s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (*s == '\0')
		return (ft_substr("", NULL));
	if (s1 != NULL)
		s_len = s_len - ft_strlen(s1) + 1;
	p = (char *)malloc(sizeof(char) * (s_len + 1));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < s_len && s[i])
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	i;

	i = 0;
	i = ft_strlen(s1) + ft_strlen(s2);
	p = (char *)malloc(sizeof(char) * (i + 1));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (*s1)
	{
		p[i] = *s1++;
		i++;
	}
	while (*s2)
	{
		p[i] = *s2++;
		i++;
	}
	p[i] = '\0';
	return (p);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			break ;
		i++;
	}
	if ((unsigned char)s[i] != (unsigned char)c)
		return (NULL);
	return ((char *)s + i);
}
