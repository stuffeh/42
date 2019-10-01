/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyeung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 16:38:42 by tyeung            #+#    #+#             */
/*   Updated: 2019/09/26 16:39:00 by tyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*tmp;
	char	out[3];
	int		end;

	out[0] = 'd';
	end = 0;
	while (ft_haswhitespace(*s) == 1)
	{
		s++;
	}
	while (ft_haswhitespace(s[end]) == 0)
	{
		end++;
	}
	tmp = out;
	return (tmp);
}
