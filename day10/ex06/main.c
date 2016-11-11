/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 21:23:54 by mgould            #+#    #+#             */
/*   Updated: 2016/11/08 09:43:12 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/day10.h"

void	output(char *op, int two, int four)
{
	if ((op[0] == '/') && (four == 0))
		ft_putstr("Stop : division by zero");
	else if ((op[0] == '%') && (four == 0))
		ft_putstr("Stop : modulo by zero");
	else if (op[0] == '+')
		ft_putnbr((two + four));
	else if (op[0] == '-')
		ft_putnbr((two - four));
	else if (op[0] == '*')
		ft_putnbr((two * four));
	else if (op[0] == '/')
		ft_putnbr((two / four));
	else if (op[0] == '%')
		ft_putnbr((two % four));
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	char	*op;
	int		two;
	int		four;

	if (argc != 4)
		return (0);
	op = argv[2];
	two = ft_atoi(argv[1]);
	four = ft_atoi(argv[3]);
	if (!(op[0] == '%' || op[0] == '*' || op[0] == '/'
		|| op[0] == '+' || op[0] == '-'))
	{
		ft_putchar('0');
		ft_putchar('\n');
		return (0);
	}
	output(op, two, four);
	return (0);
}
