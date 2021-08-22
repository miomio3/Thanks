#ifndef TETRIS_H
#define TETRIS_H

#include <stdio.h>
#include <unistd.h>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <time.h>
#include <stdlib.h>

typedef struct s_list
{
	struct s_list	*next;
	int				fd;
	char			*buf;
}t_list;

#define LINE_1				20
#define LINE_2				100
#define BUFF_SIZE			100
#define	clear_screen()		printf("\033[2J");
#define set_char_color(n)	printf("\033[3%dm", n);
#define set_back_color(n)	printf("\033[4%dm", n);
#define set_position(y, x)	printf("\033[%d;%dH", y, x);
#define cursol_on()			printf("\033[?25h");
#define cursol_off()		printf("\033[?25l");
#define BLACK				0
#define RED					1
#define GREEN				2
#define YELLOW				3
#define BLUE				4
#define MAGENDA				5
#define CYAN				6
#define WHITE				7
#define DEFAULT				9

#define set_attribute(n)	printf("\033[%dm", n);
#define NORMAL				0//通常
#define BLIGHT				1//明るく
#define	DIM					2//暗く
#define UNDERBAR			3//下線
#define BLINK				5//点滅
#define REVERSE				7//明暗反転
#define HIDE				8//隠れる
#define	STRIKE				9//取り消し線

int 	ft_wait(int msec);
char	*ft_read(int fd);
void	end(void);
void	init(void);
size_t	ft_strlen(const char *str);
void	thanks(void);
char	*ft_strdup(const char *src);
char	*ft_substr(char const *s, const char *s1);
char	*ft_strchr(const char *s, int c);
char	*create_line(int fd, size_t *len);
char	*ft_strjoin(char const *s1, char const *s2);
void	*ft_calloc(size_t count, size_t size);
void	join_free(t_list **list, char **line, char **tmp2, char *p);
char	*listbuf_join2(t_list **list);
char	*listbuf_join(t_list **list, int f);
char	*free_list(t_list **list);
int		create_list(t_list **tmp, int fd);
char	*get_next_line(int fd);
void	init_line2(int line[LINE_1][LINE_2]);
void	create_line2(char *line, int line2[LINE_1][LINE_2]);
void	print_line(int line2[LINE_1][LINE_2], int i);
void	print_thanks(int line2[LINE_1][LINE_2]);

#endif
