/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 18:24:09 by mgould            #+#    #+#             */
/*   Updated: 2016/11/07 19:09:57 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_map.c"

int	ft_square_number(int i)
{
	int nbr;

	nbr = i * i;
	return (nbr);
}

int main()
{
	int *tab;
	int i;
	int length;
	int (*f)(int);

	length = 20;
	i = 0;
	tab = (int*)malloc(sizeof(i) * length);
	f = &ft_square_number;
	while(i < length)
	{
		tab[i] = i;
		printf("tab is:%d, ", tab[i]);
		i++;
	}
	tab = ft_map(tab, length, f);
	i = 0;
	printf("\n\n");
	while (i < length)
	{
		printf("maptab is:%d, ", tab[i]);
		i++;
	}

}
