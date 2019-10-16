#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	i;
	char 			*out;

	i = 0;
	out = NULL;
	if (s && f && (out = ft_strnew(ft_strlen(s))))
	{
		while (s[i])
		{
			out[i] = (*f)(s[i]);
			++i;
		}
	}
	return (out);
}