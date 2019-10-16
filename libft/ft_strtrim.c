#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	stop;
	char	*out;

	start = 0;
	out = NULL;
	if (!s)
		return (out);
	stop = ft_strlen(s);
	while (ty_haswhitespace(s[start]))
	{
		start++;
	}
	while (ty_haswhitespace(s[stop - 1]))
	{
		stop--;
	}
	if (stop < start)
	{
		stop = start;
	}
	if ((out = ft_strnew(stop - start)))
		ft_strncpy(out, s + start, stop - start);
	return (out);
}