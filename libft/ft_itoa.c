#include "libft.h"

static size_t	ty_countplaces(long n)
{
	size_t	i;

	i = 1;
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*out;
	size_t	digits;
	int 	isneg;
	long	nn;

	nn = n;
	out = NULL;
	isneg = 0;
	if (nn < 0)
	{
		isneg = 1;
		nn = -nn;
	}
	out = ft_strnew(digits = ty_countplaces(nn) + isneg);
	if (out)
	{
		while (digits > 0)
		{
			out[--digits] = (nn % 10) + '0';
			nn = nn / 10;
		}
		if (isneg)
		{
			out[0] = '-';
		}
	}
	return (out);
}
