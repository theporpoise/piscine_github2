/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 21:23:54 by mgould            #+#    #+#             */
/*   Updated: 2016/11/08 09:29:35 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/day10.h"
#include <stdio.h>

/*
 * check if 3 args, if not 3 don't display anything
 * check for valid args, if not valid, return 0
 * look for numbers in word and negative positive atoi style.
*/

// structs start with s_ and typedef start with t_

typedef struct M_ops
{
	char	symbol;
	int		(*p_func)(int x, int y);
} M_op;

struct	M_ops	*create_ops()
{
	M_op	*table;

	table[0].symbol = '+';
	table[0].p_func = &sum;
	return table;
}

int	main(int argc, char **argv)
{
	char	*op;
	int		two;
	int		four;
	M_op	*table;

	if (argc != 4)
		return (0);
	op = argv[2];
	two = ft_atoi(argv[1]);
	four = ft_atoi(argv[3]);
	table = create_ops();
	if (!(op[0] == '%' || op[0] == '*' || op[0] == '/'
		|| op[0] == '+' || op[0] == '-'))
	{
			ft_putchar('0');
			return (0);
	}
	if ((op[0] == '/') && (four == 0))
		ft_putstr("Stop : division by zero");
	else if ((op[0] == '%') && (four == 0))
		ft_putstr("Stop : modulo by zero");

	return (0);
}

















	//printf("%d", p[0](two, four));
	//printf("op is:%c", op[0]);ft_atoi(argv[1]), ft_atoi(argv[3]))
	//printf("one is:%d, two is:%d", one, two);


































