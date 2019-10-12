#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*out;
	size_t	i;

	i = 0;
	out = NULL;
	if ((out = ft_memalloc(len + 1)) && s && *s)
	{
		while (i < len)
		{
			out[i] = s[start + i];
			i++;
		}
		out[i] = '\0';
	}
	return (out);
}