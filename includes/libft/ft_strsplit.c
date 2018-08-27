/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 16:30:08 by akrushin          #+#    #+#             */
/*   Updated: 2018/06/22 16:30:14 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(const char *s, char c)
{
	char	**ret;
	char	**pointer_ret;
	size_t	i;
	size_t	len;

	if (!s || !c || !(ret = (char **)malloc(sizeof(char *) * \
		ft_arrcount(s, c))))
		return (0);
	pointer_ret = ret;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			len = 0;
			while (s[i + len] && (s[i + len] != c))
				len++;
			*ret++ = ft_strsub(s, i, len);
			i += len;
		}
	}
	*ret++ = NULL;
	return (pointer_ret);
}
