#include "libft.h"

char	*ty_strctrim(char *s, char c)
{
	size_t	start;
	size_t	stop;
	char	*out;

	start = 0;
	out = NULL;
	if (!s)
		return (out);
	stop = ft_strlen(s);
	while (s[start] && s[start] == c)
		start++;
	while (s[stop] && s[stop - 1] == c)
		stop--;
	if (stop < start)
		stop = start;
	out = ft_strncpy(s, s + start, stop - start);
	s[stop - start] = '\0';
	return (out);
}
