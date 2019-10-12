#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t i;
	size_t j;
	size_t count;
	char *out;

	if (s1 && *s1)
	{
		i = ft_strlen(s1);
	}
	else
		i = 0;
	if (s2 && *s2)
		j = ft_strlen(s2);
	else
		j = 0;
	count = 0;
	if (!(out = ft_memalloc(i + j + 1)))
		return (NULL);
	while (count < i)
	{
		out[count] = s1[count];
		count++;
	}
	count = 0;
	while (count < j)
	{
		out[count + i] = s2[count];
		count++;
	}
	return (out);
}
