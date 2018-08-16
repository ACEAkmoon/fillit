/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 16:29:19 by akrushin          #+#    #+#             */
/*   Updated: 2018/07/02 16:29:21 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *destptr, const char *srcptr)
{
	char *pointer_destptr;

	pointer_destptr = destptr;
	while (*destptr)
		destptr++;
	ft_strcpy(destptr, srcptr);
	return (pointer_destptr);
}
