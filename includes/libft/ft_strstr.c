/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 16:44:25 by akrushin          #+#    #+#             */
/*   Updated: 2018/07/02 16:44:28 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *string1, const char *string2)
{
	if (!*string2)
		return ((char *)string1);
	while (*string1)
	{
		if (*string1 == *string2 &&
			ft_memcmp(string1, string2, ft_strlen(string2)) == 0)
			return ((char *)string1);
		string1++;
	}
	return (0);
}
