/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 18:24:09 by mgould            #+#    #+#             */
/*   Updated: 2016/11/07 19:12:14 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int *nbr;
	int i;

	i = 0;
	nbr = (int*)malloc(sizeof(int) * length);
	while (i < length)
	{
		nbr[i] = f(tab[i]);
		i++;
	}
	return (nbr);
}
