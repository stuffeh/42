#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

void	ft_bzero(void *out, size_t size);
void	*ft_memalloc(size_t size);
void	ft_putchar_fd(char c, int fd);
void    ft_putchar(char c);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putendl(char const *s);
void	ft_putnbr(int n);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr(char const *s);
void	ft_putstr_fd(char const *s, int fd);
size_t	ft_strlen(char *str);

#endif
