/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 16:23:44 by akrushin          #+#    #+#             */
/*   Updated: 2018/06/22 16:23:46 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, size_t start, size_t len)
{
	char	*str;

	if (s)
	{
		str = malloc(sizeof(char) * (len + 1));
		if (str)
		{
			s += start;
			ft_strncpy(str, s, len);
			str[len] = '\0';
			return (str);
		}
	}
	return (0);
}
