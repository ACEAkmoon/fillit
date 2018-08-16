/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 13:07:22 by akrushin          #+#    #+#             */
/*   Updated: 2018/06/22 13:07:25 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *string1, const char *string2, size_t num)
{
	size_t	size_str2;

	if (!*string2)
		return ((char *)string1);
	size_str2 = ft_strlen(string2);
	while (*string1 && num-- >= size_str2)
	{
		if (*string1 == *string2 && ft_memcmp(string1, string2, size_str2) == 0)
			return ((char *)string1);
		string1++;
	}
	return (0);
}
