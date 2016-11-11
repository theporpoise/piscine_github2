/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   day10.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 13:01:43 by mgould            #+#    #+#             */
/*   Updated: 2016/11/07 23:00:15 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DAY10_H
# define DAY10_H
# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
void	ft_swap(int *a, int *b);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
int		sum(int a, int b);
int		sub(int a, int b);
int		mul(int a, int b);
int		div(int a, int b);
int		mod(int a, int b);
#endif
