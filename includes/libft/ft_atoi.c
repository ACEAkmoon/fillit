/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 16:26:17 by akrushin          #+#    #+#             */
/*   Updated: 2018/07/02 16:26:20 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_atoi(const char *string)
{
	int				negativ;
	long int		result;

	negativ = 1;
	result = 0;
	while (ft_isspace(*string))
		string++;
	if (*string == '-')
		negativ = -1;
	if (*string == '-' || *string == '+')
		string++;
	while (ft_isdigit(*string))
	{
		result = result * 10 + (*string - 48);
		if (result < 0 && negativ > 0)
			return (-1);
		if (result < 0 && negativ < 0)
			return (0);
		string++;
	}
	return (result * negativ);
}
