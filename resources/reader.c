/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 16:19:46 by akrushin          #+#    #+#             */
/*   Updated: 2018/08/25 16:19:48 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_reader(char *file)
{
	int		logdtype;
	size_t	i;
	char	tmp[545];
	char	buf_symb[1];

	i = 0;
	if ((logdtype = open(file, O_RDONLY)) == -1)
		ft_error("");
	while (read(logdtype, buf_symb, 1))
	{
		tmp[i++] = buf_symb[0];
		if (i > 545)
			ft_error("");
	}
	tmp[i] = '\0';
	if (close(logdtype) == -1)
		ft_error("");
	return (ft_strdup(tmp));
}
