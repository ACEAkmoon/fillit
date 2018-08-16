/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 16:47:38 by akrushin          #+#    #+#             */
/*   Updated: 2018/06/22 16:47:45 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ret;

	if (lst && f)
	{
		ret = f(lst);
		ret->next = ft_lstmap(lst->next, f);
		ret->prev = ft_lstmap(lst->prev, f);
		return (ret);
	}
	return (NULL);
}
