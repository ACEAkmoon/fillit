/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 16:44:43 by akrushin          #+#    #+#             */
/*   Updated: 2018/06/22 16:44:44 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if (alst && *alst && del)
	{
		(*alst)->prev ? ft_lstdel(&(*alst)->prev, del) : 0;
		(*alst)->next ? ft_lstdel(&(*alst)->next, del) : 0;
		ft_lstdelone(alst, del);
	}
}
