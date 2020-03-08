/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cillaoi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 06:37:46 by cillaoi           #+#    #+#             */
/*   Updated: 2020/03/08 06:37:52 by cillaoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"
#include <stdio.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	char sl1;
	char star;
	char sl2;
	char empty;
	char n;
	int i;
	int j;

	sl1 = '/';
	star = '*';
	sl2 = '\\';
	empty = ' ';
	n = '\n';
	i = 0;
	j = 0;
	if (x == 1 && y == 1)
		ft_putchar(sl1);
	else
	{
		while (i < y)
		{
			j = 0;
			while (j < x)
			{
				if ((i == 0 && j == 0) || (i == y - 1 && j == x - 1 && x != 1 && y != 1))
					ft_putchar(sl1);
				else if ((i == 0 && j == x - 1) || (i == y - 1 && j == 0))
					ft_putchar(sl2);
				else if ((i == 0 && j > 0 && j < x - 1) || (i == y - 1 && j > 0 && j < x - 1) || (j == 0 && i > 0 && i < y - 1) || (j == x - 1 && i > 0 && i < y - 1))
					ft_putchar(star);
				else if (i > 0 && i < y - 1 && j > 0 && j < x - 1)
					ft_putchar(empty);
				if (j == x-1 && i != y - 1)
					ft_putchar(n);
				j = j + 1;
			}
			i = i + 1;
		}
	}
}
