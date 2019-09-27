/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyeung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 16:37:32 by tyeung            #+#    #+#             */
/*   Updated: 2019/09/26 16:37:42 by tyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;
	int		sent;

	sent = 0;
	i = 0;
	while (i < len)
	{
		if (src[i] != '\0' && sent == 0)
		{
			dst[i] = src[i];
		}
		else
		{
			sent = 1;
			dst[i] = '\0';
		}
		i++;
	}
	return (dst);
}
