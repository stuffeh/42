#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *out;

	if ((out = ft_memalloc(size + 1)))
	{
		while (0 < size)
		{
			out[--size] = '\0';
		}
		return (out);
	}
	return (NULL);
}
