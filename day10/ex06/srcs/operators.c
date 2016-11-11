/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 23:02:30 by mgould            #+#    #+#             */
/*   Updated: 2016/11/08 09:39:03 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	sum(int a, int b)
{
	return (a + b);
}

int	sub(int a, int b)
{
	return (a - b);
}

int	mul(int a, int b)
{
	return (a * b);
}

int	div(int a, int b)
{
	if (b)
		return (a / b);
	else
		return (0);
}

int	mod(int a, int b)
{
	return (a % b);
}
