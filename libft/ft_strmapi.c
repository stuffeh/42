#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*out;
	unsigned int	i;

	i = 0;
	out = NULL;
	if (s && f && (out = ft_strnew(ft_strlen(s))))
	{
		while (s[i])
		{
			out[i] = (*f)(i, s[i]);
			++i;
		}
	}
	return (out);
}