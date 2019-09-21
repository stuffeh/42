#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

size_t	ft_strlen(char *str);
void	ft_putchar_fd(char c, int fd);
void    ft_putchar(char c);

#endif
