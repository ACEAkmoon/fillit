/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubblesort_int.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 17:23:59 by akrushin          #+#    #+#             */
/*   Updated: 2018/07/19 17:24:00 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_bubblesort_int(int n)
{
	int		arr[20];
	size_t	step1;
	size_t	step2;

	if (n)
	{
		step1 = 0;
		step2 = 0;
		while (n && step1 <= 20)
		{
			arr[step1++] = n % 10;
			n /= 10;
		}
		ft_bubblesort(arr, step1);
		while (step2 < step1)
			n = n * 10 + arr[step2++];
		return (n);
	}
	return (0);
}
