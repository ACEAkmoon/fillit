/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 16:17:34 by akrushin          #+#    #+#             */
/*   Updated: 2018/08/25 16:17:36 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	t_tetr	*canvas;
	char	**output;

	if (argc == 2)
	{
		canvas = ft_coordination(ft_recorder(ft_reader(argv[1])));
		output = ft_result(canvas, ft_map_size(canvas));
		ft_output(output);
		ft_memdel((void**)canvas);
		ft_memdel((void**)output);
		return (0);
	}
	ft_error("usage: fillit input_file");
	return (1);
}
