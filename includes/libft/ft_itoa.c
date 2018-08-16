/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 16:31:33 by akrushin          #+#    #+#             */
/*   Updated: 2018/06/22 16:31:35 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	parsing(int n, size_t *len, int *bufer)
{
	*len = 1;
	if (n >= 0)
	{
		*len = 0;
		n = -n;
	}
	*bufer = 1;
	while (n / *bufer < -9)
	{
		*bufer *= 10;
		*len += 1;
	}
}

char		*ft_itoa(int n)
{
	size_t	len;
	int		bufer;
	char	*str;
	char	*pointer_str;

	parsing(n, &len, &bufer);
	str = ft_memalloc(len + 2);
	if (str == NULL)
		return (NULL);
	pointer_str = str;
	if (n < 0)
		*str++ = '-';
	else
		n = -n;
	while (bufer >= 1)
	{
		*str++ = -(n / bufer % 10) + 48;
		bufer /= 10;
	}
	return (pointer_str);
}
