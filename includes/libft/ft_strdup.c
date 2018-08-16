/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 16:32:03 by akrushin          #+#    #+#             */
/*   Updated: 2018/07/02 16:32:04 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *srcptr)
{
	char *bufer;

	bufer = ft_stralloc(srcptr);
	if (bufer)
		ft_strcpy(bufer, srcptr);
	return (bufer);
}
