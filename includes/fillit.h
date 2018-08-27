/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 16:15:31 by akrushin          #+#    #+#             */
/*   Updated: 2018/08/25 16:15:32 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "./libft/libft.h"

# define BASE_ERROR(x) if (x) ft_error("");

typedef struct		s_tetr
{
	int				x[4];
	int				y[4];
	char			*str;
	char			output_symbol;
	struct s_tetr	*next;
}					t_tetr;

void				ft_error(char *err_str);
void				ft_output(char **output);

int					ft_check_conect(char *str);
int					ft_check_valid(char *str);
int					ft_map_size(t_tetr *tetrimino);
int					ft_check_position(char **map, t_tetr *tetrimino, int size);

char				*ft_reader(char *file);
char				**ft_fill_map(char **tab, int max);
char				**ft_result(t_tetr *tetrimino, int max);
char				**ft_solve(char **map, t_tetr *tetrimino, int size);

t_tetr				*ft_recorder(char *str);
t_tetr				*ft_coordination(t_tetr *tetrimino);
t_tetr				*ft_upd_coord(t_tetr *tetrimino, int x, int y);
#endif
