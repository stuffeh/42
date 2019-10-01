#include "libft.h"
#include <stdlib.h>

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
	ft_strncat("asdf", "gcc", 3);
}