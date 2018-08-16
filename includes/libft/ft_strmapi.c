/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 16:20:18 by akrushin          #+#    #+#             */
/*   Updated: 2018/06/22 16:20:19 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*new;
	size_t			i;

	if (s && f)
	{
		new = ft_stralloc(s);
		if (new)
		{
			i = -1;
			while (s[++i])
				new[i] = f(i, s[i]);
			new[i] = '\0';
		}
		return (new);
	}
	return (0);
}
