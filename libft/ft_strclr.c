#include "libft.h"

void	ft_strclr(char *s)
{
	char *ss;

	ss = s;
	while (ss && *ss)
		*ss++ = '\0';
}