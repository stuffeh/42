#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen = ft_strlen(src);
	size_t	dstlen = ft_strnlen(dst, dstsize);

	if (dstlen == dstsize)
		return dstsize + srclen;
	if (srclen < dstsize - dstlen)
	{
		dst = ft_strncat(dst, src, srclen);
	}
	else
	{
		dst = ft_strcat(dst, src, (dstsize - ft_strlen(dst)));
	}
	return (dstlen + srclen);
}