#include "libft.h"
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int	main(void)
{
	//test for ft_strlen
	/*
	size_t x = ft_strlen("asdf");
	printf("%zu", x);
	return 0;
	 */

	//test for ft_strncpy;
	/*
	char ds[10];
	//size_t z = 10;
	//char *y =  ft_strncpy(ds, "asdf", z);
	//printf("fin:%s\n", ft_strncpy(ds, "", z));
	ft_strncpy(ds, "asdf", 3);
	printf("fin:%s\n", ds);


	char src[40];
	char dest[20];

	memset(dest, '\0', sizeof(dest));
	strcpy(src, "This is tutorialspoint.com");
	strncpy(dest, src, 10);

	printf("Final copied string : %s\n", dest);
	 */
	//test for ft_atoi
	/*
	int x = ft_atoi("9223372036854775806");
	printf("ft_atoi:%d\n", x);

	x = atoi("9223372036854775806");
	printf("atoi:%d\n", x);
	return(0);*/

	//test for ft_strncat
	//printf(ft_strncat);
	// test for ft_strlcat
	/*char	*dest;
	int		arg = 9;

	alarm(5);
	if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
		return (0);
	memset(dest, 0, 15);
	memset(dest, 'r', 6);
	if (arg == 1)
	{
		dest[11] = 'a';
		printf("%zu", ft_strlcat(dest, "lorem", 15));
		write(1, "\n", 1);
		write(1, dest, 15);
	}
	else if (arg == 2)
	{
		printf("%zu", ft_strlcat(dest, "", 15));
		write(1, "\n", 1);
		write(1, dest, 15);
	}
	else if (arg == 3)
	{
		dest[0] = '\0';
		dest[11] = 'a';
		printf("%zu", ft_strlcat(dest, "lorem ipsum", 15));
		write(1, "\n", 1);
		write(1, dest, 15);
	}
	else if (arg == 4)
	{
		dest[14] = 'a';
		printf("%zu", ft_strlcat(dest, "lorem ipsum dolor sit amet", 15));
		write(1, "\n", 1);
		write(1, dest, 15);
	}
	else if (arg == 5)
	{
		dest[10] = 'a';
		printf("%zu", ft_strlcat(dest, "lorem ipsum dolor sit amet", 0));
		write(1, "\n", 1);
		write(1, dest, 15);
	}
	else if (arg == 6)
	{
		dest[10] = 'a';
		printf("%zu", ft_strlcat(dest, "lorem ipsum dolor sit amet", 1));
		write(1, "\n", 1);
		write(1, dest, 15);
	}
	else if (arg == 7)
	{
		memset(dest, 'r', 15);
		printf("%zu", ft_strlcat(dest, "lorem ipsum dolor sit amet", 5));
		write(1, "\n", 1);
		write(1, dest, 15);
	}
	else if (arg == 8)
	{
		dest[10] = 'a';
		printf("%zu", ft_strlcat(dest, "lorem ipsum dolor sit amet", 6));
		write(1, "\n", 1);
		write(1, dest, 15);
	}
	else if (arg == 9)
	{
		memset(dest, 'r', 14);
//		printf("num1:%zu\n", strlcat(dest, "lorem ipsum dolor sit amet", 15));
		printf("num2:%zu\n", ft_strlcat(dest, "lorem ipsum dolor sit amet", 15));
		write(1, "\n", 1);
		write(1, dest, 15);
		printf("\ndest:%s", dest);
	}*/

}