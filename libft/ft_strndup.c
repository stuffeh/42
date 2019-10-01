#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char	*out;
	size_t	len;

	if (!(out = (char*)ft_memalloc(sizeof(char) * (n + 1))))
	{
		return (NULL);
	}
	len = 0;
	while(s1[len] && len < n)
	{
		out[len] = (char)s1[len];
		len++;
	}
	out[len] = '\0';
	return (out);
}
