#include "fillit.h"

t_tetr	*ft_recorder(char *str)
{
	size_t	i;
	char	symbol;
	t_tetr	*tetrimino;
	t_tetr	*t_pointer;

	symbol = 64;
	i = ft_check_valid(str);
	if (!(tetrimino = malloc(sizeof(t_tetr))))
		return (0);
	t_pointer = tetrimino;
	while (i-- > 0)
	{
		tetrimino->str = ft_strndup(str, 20);
		if(!(ft_check_conect(tetrimino->str)))
			ft_error("");
		tetrimino->output_symbol = ++symbol;
		str += 21;
		if (!(tetrimino->next = malloc(sizeof(t_tetr))))
			return (0);
		tetrimino = tetrimino->next;
	}
	tetrimino->next = NULL;
	return (t_pointer);
}
