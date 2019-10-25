/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyeung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 18:58:23 by tyeung            #+#    #+#             */
/*   Updated: 2019/10/16 18:58:26 by tyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	size_t	words;
	size_t	i;
	char	**out;
	char	*ss;

	out = NULL;
	if (!c || !s || !(ss = ft_strdup(s)))
		return (out);
	i = 0;
	words = ty_charsearch(ss, c);
	if ((out = (char **)ft_memalloc(sizeof(char *) * (words + 1))))
	{
		while (i < words)
			out[i++] = ty_returnword(ss, c);
	}
	return (out);
}
