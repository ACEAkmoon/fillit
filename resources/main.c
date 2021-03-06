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
	t_tetr	*t_blok;
	char	*string;
	char	**output;

	if (argc == 2)
	{
		string = ft_reader(argv[1]);
		t_blok = ft_coordination(ft_recorder(string));
		output = ft_result(t_blok, ft_map_size(t_blok));
		ft_output(output);
		ft_arrdel(output);
		return (0);
	}
	ft_error("usage: fillit input_file");
	return (1);
}
