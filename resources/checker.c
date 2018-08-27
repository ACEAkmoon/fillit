/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 16:16:27 by akrushin          #+#    #+#             */
/*   Updated: 2018/08/25 16:16:29 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_check_conect(char *str)
{
	int i;
	int block;

	i = 0;
	block = 0;
	while (i < 20)
	{
		if (str[i] == '#')
		{
			if ((i + 1) < 20 && str[i + 1] == '#')
				block++;
			if ((i - 1) >= 0 && str[i - 1] == '#')
				block++;
			if ((i + 5) < 20 && str[i + 5] == '#')
				block++;
			if ((i - 5) >= 0 && str[i - 5] == '#')
				block++;
		}
		i++;
	}
	return (block == 6 || block == 8);
}

int		ft_check_valid(char *str)
{
	size_t dot;
	size_t sharp;
	size_t newl;

	dot = 0;
	sharp = 0;
	newl = 0;
	while (*str)
	{
		if (*str == '.')
			dot++;
		else if (*str == '#')
			sharp++;
		else if (*str == '\n')
			*(str + 1) == '\n' && dot % 12 ? ft_error("") : newl++;
		else
			ft_error("");
		str++;
	}
	if (dot % 12 || sharp % 4 || ++newl % 5)
		ft_error("");
	return (sharp / 4);
}

int		ft_check_position(char **map, t_tetr *tetrimino, int size)
{
	int		x;
	int		y;
	size_t	i;

	y = 0;
	i = 0;
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			if (tetrimino->x[i] == x && tetrimino->y[i] == y && \
				map[y][x] != '.')
				return (0);
			else if (tetrimino->x[i] == x && tetrimino->y[i] == y)
				i++;
			x++;
		}
		y++;
	}
	if (i < 4)
		return (0);
	return (1);
}
