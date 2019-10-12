/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyeung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 23:53:10 by tyeung            #+#    #+#             */
/*   Updated: 2019/10/11 23:53:12 by tyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	count;
	char	*out;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
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