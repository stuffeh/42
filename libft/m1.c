#include <stdio.h>
//#include "./includes/libft.h"

int	ty_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strrev(char *str)
{
	char tmp;
	int len;
	int i;

	len = ty_strlen(str) - 1;
	i = 0;
	while(i <= len)
	{
		tmp = str[len];
		str[len] = str[i];
		str[i] = tmp;
		i++;
		len--;
	}
	return str;
}



int	main(void)
{
	//test for ft_putchar
/*
	ft_putchar('d');
*/
//	ft_putstr("asdf");
	char asdf[] = "abcdef";
	ft_strrev(asdf);
	printf("%s\n",asdf);
	return 0;
}