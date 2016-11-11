/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 18:28:04 by mgould            #+#    #+#             */
/*   Updated: 2016/11/09 11:36:51 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

int main()
{
	char *data;
	char *data1;
	char *data2;
	t_list *list;
	int 	i;

	i = 1;
	data = "one";
	data1 = "two";
	data2 = "thre";
	list = ft_create_elem(data);
	ft_list_push_front(&list, data1);
	ft_list_push_front(&list, data2);

	while(list->next)
	{
		printf("%d is:%s", i, list->data);
		list = list->next;
		i++;
	}
	printf("%d is:%s", i, list->data);

}
