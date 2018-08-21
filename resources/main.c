#include "fillit.h"

int		main(int argc, char **argv)
{
	t_tetr	*canvas;
	char	**output;

	if (argc == 2)
	{
		canvas = ft_coordination(ft_recorder(ft_reader(argv[1])));
		output = ft_result(canvas, ft_map_size(canvas));
		ft_memdel((void**)canvas);
		ft_output(output);
		ft_memdel((void**)output);
		return (0);
	}
	ft_error("usage: fillit input_file");
	return (1);
}
