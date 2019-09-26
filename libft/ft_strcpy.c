#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t len = ft_strlen((char*)src) + 1;
	return ft_strncpy(dst, src, len);
}