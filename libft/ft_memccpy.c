#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];

		if (((unsigned char *)dst)[i] == (unsigned char)c)
			return (&((unsigned char *)dst)[i+1]);
		i++;
	}
	return (NULL);
}
