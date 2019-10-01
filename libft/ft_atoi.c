/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyeung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 21:46:18 by tyeung            #+#    #+#             */
/*   Updated: 2019/07/15 21:46:21 by tyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ty_atoi(const char *str, int ispos)
{
	int count;
	unsigned long num;
	int len;
	int sentinel;

	count = 0;
	num = 0;
	len = 0;
	sentinel = 0;

	while (ft_isdigit(str[count]) == 1)
	{
		if((str[count] != '0') || (sentinel == 1))
		{
			len++;
			sentinel = 1;
		}
		num = 10 * num + (str[count] - '0');
		count++;
	}
	if (len >= 19)
	{
		if (ispos == -1)
		{
			return (0);
		}
		else
		{
			return (-1);
		}
	}
	if (num >= (unsigned long)9223372036854775807U && ispos == 1)
	{
		return (-1);
	}
	if (num >= (unsigned long)9223372036854775808U && ispos == -1)
	{
		return (0);
	}
	return (num * ispos);
}

int	ft_atoi(const char *str)
{
	char	st;
	int		ispos;

	st = str[0];
	ispos = 1;
	while (ft_haswhitespace(*str) == 1 )
	{
		str++;
	}
	if ((str[0] == '+' || (str[0] == '-')) && (ft_isdigit(str[1])))
	{
		if (*str == '-')
		{
			ispos = -1;
		}
		str++;
	}
	return (ty_atoi(str, ispos));
}
