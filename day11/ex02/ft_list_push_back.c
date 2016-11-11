/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 16:12:04 by mgould            #+#    #+#             */
/*   Updated: 2016/11/08 18:40:17 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*box;

	box = *begin_list;
	if (!(begin_list))
	{
		*begin_list = ft_create_elem(data);
	}
	else
	{
		while (box->next)
		{
			box = box->next;
		}
		box->next = ft_create_elem(data);
	}
}
