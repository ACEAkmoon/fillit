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
	int		fd;
	size_t	i;
	char	tmp[545];
	char	buf_symb[1];

	i = 0;
	BASE_ERROR((fd = open(file, O_RDONLY)) == -1);
	while (read(fd, buf_symb, 1))
	{
		tmp[i++] = buf_symb[0];
		BASE_ERROR(i > 545);
	}
	tmp[i] = '\0';
	BASE_ERROR(close(fd) == -1);
	return (ft_strdup(tmp));
}
