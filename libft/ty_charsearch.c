#include "libft.h"

size_t	ty_charsearch(char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	s = ty_strctrim(s, c);
	while (s[i] != '\0')
	{
		if (s[i] && s[i] == c)
		{
			while (s[i] && s[i] == c)
				i++;
		}
		else
		{
			while (s[i] && s[i] != c)
				i++;
			count++;
		}
	}
	return (count);
}
