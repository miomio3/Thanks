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

void	init_line2(int line[LINE_1][LINE_2])
{
	int	i;
	int	j;

	i = 0;
	while(i < LINE_1)
	{
		j = 0;
		while(j < LINE_2)
			line[i][j++] = 0;
		i++;
	}
}

void	create_line2(char *line, int line2[LINE_1][LINE_2])
{
	int	i;
	int	j1;
	int	j2;
	int	turn;

	i = 0;
	j1 = 0;
	j2 = 0;
	turn = 0;
	while(line[i])
	{
		if(line[i] == '*')
			line2[j1][j2++] = i - turn;
		else if(line[i] == '\n')
		{
			j1++;
			j2 = 0;
			turn = i + 1;
		}
		else if(line[i] == '\0')
			break;
		i++;
	}
}