/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 13:02:52 by akrushin          #+#    #+#             */
/*   Updated: 2018/06/22 13:02:54 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *string, int symbol)
{
	while (1)
	{
		if (*string == symbol)
			return ((char*)string);
		else if (*string++ == '\0')
			return (0);
	}
}
