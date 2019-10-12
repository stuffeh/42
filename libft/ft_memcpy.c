#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	if (dst || src)
	{
		while (n > 0)
		{
			n--;
			((unsigned char *) dst)[n] = ((unsigned char *) src)[n];
		}
	}
	return (dst);
}