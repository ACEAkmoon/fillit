/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 16:18:40 by akrushin          #+#    #+#             */
/*   Updated: 2018/08/25 16:18:44 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int				ft_map_size(t_tetr *tetrimino)
{
	size_t	i;
	size_t	size;

	i = 0;
	size = 2;
	while (tetrimino->next && i++)
		tetrimino = tetrimino->next;
	while (size * size < i * 4)
		size++;
	return (size);
}

char			**ft_fill_map(char **map, int size)
{
	int y;

	y = 0;
	if (!(map = (char **)malloc(sizeof(char *) * (size + 1))))
		return (NULL);
	while (y < size)
		ft_memset(map[y++] = ft_strnew(size), '.', size);
	map[y] = '\0';
	return (map);
}

t_tetr			*ft_upd_coord(t_tetr *tetrimino, int x, int y)
{
	int		upd_x[4];
	size_t	upd_y;
	size_t	i;

	i = 0;
	ft_memcpy(upd_x, tetrimino->x, sizeof(upd_x));
	ft_bubblesort(upd_x, 4);
	upd_y = tetrimino->y[0];
	while (i < 4)
	{
		tetrimino->x[i] = tetrimino->x[i] - upd_x[0] + x;
		tetrimino->y[i] = tetrimino->y[i] - upd_y + y;
		i++;
	}
	return (tetrimino);
}

static t_tetr	*ft_rec_coord(t_tetr *tetrimino, char **str)
{
	int		x;
	int		y;
	size_t	i;

	y = 0;
	i = 0;
	while (str[y])
	{
		x = 0;
		while (str[y][x])
		{
			if (str[y][x] == '#')
			{
				tetrimino->x[i] = x;
				tetrimino->y[i++] = y;
			}
			x++;
		}
		y++;
	}
	return (tetrimino);
}

t_tetr			*ft_coordination(t_tetr *tetrimino)
{
	t_tetr	*t_pointer;

	t_pointer = tetrimino;
	while (tetrimino->next)
	{
		tetrimino = ft_rec_coord(tetrimino, ft_strsplit(tetrimino->str, '\n'));
		free(tetrimino->str);
		tetrimino = tetrimino->next;
	}
	return (t_pointer);
}
