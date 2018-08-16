/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubblesort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 16:09:26 by akrushin          #+#    #+#             */
/*   Updated: 2018/07/17 16:09:28 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_bubblesort(int *arr, size_t num)
{
	size_t	step1;
	size_t	step2;

	if (arr && num)
	{
		step1 = 0;
		step2 = 1;
		while (step2 < num)
		{
			if (arr[step1] > arr[step2])
				ft_swap(&arr[step1], &arr[step2]);
			step1++;
			step2++;
		}
		num != 0 ? ft_bubblesort(arr, --num) : (void)NULL;
	}
}
