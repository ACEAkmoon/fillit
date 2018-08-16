/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 16:40:58 by akrushin          #+#    #+#             */
/*   Updated: 2018/07/02 16:41:01 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *string1, const char *string2, size_t num)
{
	while (*string1 && *string2 && *string1 == *string2 && num--)
	{
		string1++;
		string2++;
	}
	if (num)
		return (*(unsigned char *)string1 - *(unsigned char *)string2);
	else
		return (0);
}
