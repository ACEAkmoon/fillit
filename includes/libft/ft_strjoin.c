/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 16:24:58 by akrushin          #+#    #+#             */
/*   Updated: 2018/06/22 16:25:01 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	char	*pointer_destptr;

	if (s1 && s2)
	{
		str = (char *)malloc(sizeof(char) *
			(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1));
		pointer_destptr = str;
		if (str)
		{
			ft_strcat(ft_strcpy(str, s1), s2);
			return (pointer_destptr);
		}
	}
	return (0);
}
