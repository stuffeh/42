/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_haswhitespace.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyeung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 20:00:41 by tyeung            #+#    #+#             */
/*   Updated: 2019/09/30 20:01:08 by tyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_haswhitespace(char const str)
{
	if (((str >= 9) && (str <= 13)) || (str == 32))
		return (1);
	else
		return (0);
}