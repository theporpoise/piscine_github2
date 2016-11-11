/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 11:56:45 by mgould            #+#    #+#             */
/*   Updated: 2016/11/09 19:39:38 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *temp_p;

	temp_p = begin_list;
	if (!(begin_list))
		return (begin_list);
	while (temp_p->next)
	{
		temp_p = temp_p->next;
	}
	return (temp_p);
}
