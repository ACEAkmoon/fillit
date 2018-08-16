/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 16:34:39 by akrushin          #+#    #+#             */
/*   Updated: 2018/07/02 16:34:40 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *destptr, const char *srcptr, size_t size)
{
	size_t	size_d;
	size_t	size_s;

	size_d = 0;
	size_s = ft_strlen(srcptr);
	while (destptr[size_d] && size_d < size)
		size_d++;
	while (*destptr && size > 0 && size--)
		destptr++;
	while (*srcptr && size > 1 && size--)
		*destptr++ = *srcptr++;
	if (size != 0)
		*destptr = '\0';
	return (size_d + size_s);
}
