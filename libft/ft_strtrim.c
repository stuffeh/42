#include "libft.h"

int ft_iswhitespace(char c)
{
	if(c < 33 || c == 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ft_strtrim(char const *s)
{
	char	*tmp;
	char	out[] = "dcn";
	int		end;

	end = 0;
	while(ft_iswhitespace(*s) == 1)
	{
		s++;
	}
	while(ft_iswhitespace(s[end]) == 0)
	{
		end++;
	}
	tmp = out;
	return tmp;
}
