/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 16:33:40 by akrushin          #+#    #+#             */
/*   Updated: 2018/07/02 16:33:42 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_arrcount(const char *str, char c)
{
	size_t	i;
	size_t	num_str;

	i = 0;
	num_str = 0;
	while (*str)
	{
		if (i == 1 && *str == c)
			i = 0;
		else if (i == 0 && *str != c)
		{
			i = 1;
			num_str++;
		}
		str++;
	}
	return (++num_str);
}
