/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 17:02:43 by mgould            #+#    #+#             */
/*   Updated: 2016/11/07 18:00:32 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "ft_foreach.c"
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int c)
{
	printf("%d", c);
	/*
	if(c < 0)
	{
		ft_putchar('-');
		c *= -1;
	}
	if(c < 10)
	{
		ft_putchar('0' + c);
		return;
	}
	ft_putnbr(c/10);
	ft_putchar('0' + c);
*/
}

int main()
{
	int i;
	int *nbr;
	void (*f)(int);

	i = 0;
	nbr = (int *)(malloc(sizeof(i) * 100));
	f = &ft_putnbr;
	while(i < 100)
	{
		nbr[i] = i;
		i++;
	}
	ft_foreach(nbr, i, f);
}
