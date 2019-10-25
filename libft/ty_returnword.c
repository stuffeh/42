#include "libft.h"

char	*ty_returnword(char *s, char c)
{
	size_t	i;
	char	*out;

	out = NULL;
	i = 0;
	while (s[i] && s[i] != c)
		i++;
	if ((out = ft_strnew((sizeof(char *) * (i + 1)))))
		out = ft_strncpy(out, s, i);
	s = ft_strcpy(s, s + i);
	s = ty_strctrim(s, c);
	return (out);
}
