#include "fillit.h"

static char		**ft_reset(char **map, t_tetr *tetrimino, int size)
{
	int		x;
	int		y;

	y = 0;
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			if (map[y][x] == tetrimino->output_symbol)
				map[y][x] = '.';
			x++;
		}
		y++;
	}
	return (map);
}

static char		**ft_saved(char **map, t_tetr *tetrimino, int size)
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
			if (tetrimino->x[i] == x && tetrimino->y[i] == y)
			{
				map[y][x] = tetrimino->output_symbol;
				i++;
			}
			x++;
		}
		map[y++][x] = '\0';
	}
	map[y] = NULL;
	return (map);
}

char			**ft_solve(char **map, t_tetr *tetrimino, int size)
{
	int		x;
	int		y;
	char	**tmp;

	if (!tetrimino->next)
		return (map);
	y = 0;
	tmp = NULL;
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			tetrimino = ft_upd_coord(tetrimino, x, y);
			if (ft_check_position(map, tetrimino, size))
				if((tmp = ft_solve(ft_saved(map, tetrimino, size), tetrimino->next, size)))
					return (tmp);
			map = ft_reset(map, tetrimino, size);
			++x;
		}
		++y;
	}
	return (NULL);
}
