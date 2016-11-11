/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 18:27:10 by mgould            #+#    #+#             */
/*   Updated: 2016/11/09 11:26:00 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*box;

	if (!(*begin_list))
	{
		*begin_list = ft_create_elem(data);
	}
	else
	{
		box = ft_create_elem(data);
		box->next = *begin_list;
		*begin_list = box;
	}
}
