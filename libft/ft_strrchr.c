#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *out;

	out = NULL;
	while(*s)
	{
		if(*s == c)
		{
			out = (char *)s;
		}
		s++;
	}
	if (c == '\0')
	{
		return ((char *)s);
	}
	return (out);
}
