#include <string.h>
#include "libft.h"

char 	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;
	int sent = 0;

	i = 0;
	while(i < len)
	{
		if(src[i] != '\0' && sent == 0)
		{
			dst[i] = src[i];
		}
		else
		{
			sent = 1;
			dst[i] = '\0';
		}
		i++;
	}
	return (dst);
}
