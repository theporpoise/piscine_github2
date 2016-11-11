/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 12:11:36 by mgould            #+#    #+#             */
/*   Updated: 2016/11/09 19:42:19 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*box;
	t_list	*temp;

	if (ac == 1)
	{
		return (NULL);
	}
	box = ft_create_elem(av[1]);
	i = 2;
	while (i < ac)
	{
		temp = box;
		box = ft_create_elem(av[i]);
		box->next = temp;
		i++;
	}
	return (box);
}
