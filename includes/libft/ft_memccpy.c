/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 12:54:41 by akrushin          #+#    #+#             */
/*   Updated: 2018/06/22 12:54:44 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *destptr, const void *srcptr, int stop, size_t num)
{
	while (num--)
	{
		*(char *)destptr++ = *(char *)srcptr;
		if (*(char *)srcptr++ == (char)stop)
			return ((char *)destptr);
	}
	return (0);
}
