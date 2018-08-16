/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 16:41:51 by akrushin          #+#    #+#             */
/*   Updated: 2018/07/02 16:41:53 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *destptr, const char *srcptr, size_t num)
{
	char	*pointer_destptr;

	pointer_destptr = (char *)destptr;
	ft_memset(destptr, '\0', num);
	while (*srcptr && num--)
		*destptr++ = *srcptr++;
	return (pointer_destptr);
}
