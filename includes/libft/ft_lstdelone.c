/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 16:41:11 by akrushin          #+#    #+#             */
/*   Updated: 2018/06/22 16:41:12 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (alst && *alst && del)
	{
		del((*alst)->content, (*alst)->content_size);
		(*alst)->prev ? (*alst)->prev->next = (*alst)->next : 0;
		(*alst)->next ? (*alst)->next->prev = (*alst)->prev : 0;
		ft_memdel((void**)alst);
	}
}
