#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	if (!s1 || !s2)
		return (s1 == s2 ? 1 : 0);
	while (ty_charcomp(*s1, *s2))
	{
		if ((!(*s1)) && (!(*s2)))
		{
			return (1);
		}
		s1++;
		s2++;
	}
	return (0);
}
