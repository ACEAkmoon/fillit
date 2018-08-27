/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 13:04:54 by akrushin          #+#    #+#             */
/*   Updated: 2018/06/22 13:04:57 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int symbol)
{
	int size;

	size = ft_strlen(string) + 1;
	while (size--)
		if (string[size] == symbol)
			return ((char*)string + size);
	return (0);
}
