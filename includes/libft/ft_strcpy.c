/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 16:31:32 by akrushin          #+#    #+#             */
/*   Updated: 2018/07/02 16:31:33 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *destptr, const char *srcptr)
{
	char *pointer_destptr;

	pointer_destptr = destptr;
	while (*srcptr)
		*destptr++ = *srcptr++;
	*destptr = '\0';
	return (pointer_destptr);
}
