#include <stdlib.h>
#include "libft.h"

void *ft_memalloc(size_t size)
{
	void *out;

	if (!(out = malloc(size)))
	{
		return NULL;
	}

	ft_bzero(out, size);
	return out;
}