#include "fillit.h"

void	ft_error(char *err_str)
{
	if (*err_str)
		ft_putendl(err_str);
	else
		ft_putendl("error");
	exit (0);
}

char	**ft_result(t_tetr *tetrimino, int size)
{
	char	**map;

	map = NULL;
	while (!map)
	{
		map = ft_fill_map(map, size);
		map = ft_solve(map, tetrimino, size);
		size++;
	}
	return (map);
}

void	ft_output(char **output)
{
	if(output && *output)
		while (*output)
			ft_putendl(*output++);
	else
		ft_error("");
}
