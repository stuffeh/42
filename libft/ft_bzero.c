#include <stdlib.h>

void	ft_bzero(void *out, size_t size)
{
	char *tmp;
	size_t i;

	tmp = out;
	i = 0;
	while (i != size)
	{
		tmp[i] = 0;
		i++;
	}
}