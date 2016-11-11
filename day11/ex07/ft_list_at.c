/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 17:05:15 by mgould            #+#    #+#             */
/*   Updated: 2016/11/09 19:43:18 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int i;

	i = 1;
	while (begin_list->next && i < nbr)
	{
		begin_list = begin_list->next;
		i++;
	}
	if (i < nbr)
	{
		return (NULL);
	}
	return (begin_list);
}
