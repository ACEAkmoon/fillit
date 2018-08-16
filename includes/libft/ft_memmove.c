/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 12:56:41 by akrushin          #+#    #+#             */
/*   Updated: 2018/06/22 12:56:43 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destptr, const void *srcptr, size_t num)
{
	char	*srcc;
	char	*dstc;

	srcc = (char *)srcptr;
	dstc = (char *)destptr;
	if (srcc < dstc)
		while ((int)(num--))
			dstc[num] = srcc[num];
	else
		while (num--)
			*dstc++ = *srcc++;
	return (destptr);
}
