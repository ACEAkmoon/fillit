/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 12:58:31 by akrushin          #+#    #+#             */
/*   Updated: 2018/06/22 12:58:33 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memptr, int val, size_t num)
{
	unsigned int step;

	step = 0;
	while (step < num)
	{
		if (((char*)memptr)[step] == (char)val)
			return ((char*)memptr + step);
		step++;
	}
	return (0);
}
