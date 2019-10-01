#include "libft.h"
#include <string.h>

size_t	ft_strnlen(char const *str, size_t n)
{
	if (ft_strlen(str) < n)
		return (ft_strlen(str));
	return n;
}