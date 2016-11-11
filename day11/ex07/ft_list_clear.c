/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 16:08:28 by mgould            #+#    #+#             */
/*   Updated: 2016/11/09 17:01:50 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*box;
	t_list	*temp;

	box = *begin_list;
	while (box)
	{
		temp = box->next;
		free(box);
		box = temp;
	}
	*begin_list = NULL;
}
