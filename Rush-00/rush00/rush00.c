/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cillaoi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 06:23:53 by cillaoi           #+#    #+#             */
/*   Updated: 2020/03/08 06:23:56 by cillaoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"
#include <stdio.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	char o;
	char ver;
	char hor;
	char empty;
	char n;
	int i;
	int j;

	o = 'o';
	ver = '-';
	hor = '|';
	empty = ' ';
	n = '\n';
	i = 0;
	j = 0;
	if (x == 1 && y == 1)
		ft_putchar(o);
	else
	{
		while (i < y)
		{
			j = 0;
			while (j < x)
			{
				if ((i == 0 && j == 0) || (i == 0 && j == x - 1) || (i == y - 1 && j == 0) || (i == y - 1 && j == x - 1))
					ft_putchar(o);
				else if ((i == 0 && j > 0 && j < x - 1) || (i == y - 1 && j > 0 && j < x - 1))
					ft_putchar(ver);
				else if (i > 0 && i < y - 1 && j > 0 && j < x - 1)
					ft_putchar(empty);
				else if ((j == 0 && i > 0 && i < y - 1) || (j == x - 1 && i > 0 && i < y - 1))
					ft_putchar(hor);
				if (j == x-1 && i != y - 1)
					ft_putchar(n);
				j = j + 1;
			}
			i = i + 1;
		}
	}
}

