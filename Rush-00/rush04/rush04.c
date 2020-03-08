/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cillaoi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 18:42:52 by cillaoi           #+#    #+#             */
/*   Updated: 2020/03/07 18:42:54 by cillaoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"
#include <stdio.h>

void	ft_putchar(char c);

void print_character(char a, char b, char c, char empty, char n, int i, int j, int y, int x)
{
    if (i == 0 && j == 0)
        ft_putchar(a);
    else if (i == y - 1 && j == x - 1 && x != 1 && y != 1)
        ft_putchar(a);
    else if (i == 0 && j == x - 1)
        ft_putchar(c);
    else if (i == y - 1 && j == 0)
        ft_putchar(c);
    else if (i == 0 && j > 0 && j < x - 1)
        ft_putchar(b);
    else if (i == y - 1 && j > 0 && j < x - 1)
        ft_putchar(b);
    else if (j == 0 && i > 0 && i < y - 1)
        ft_putchar(b);
    else if (j == x - 1 && i > 0 && i < y - 1)
        ft_putchar(b);
    else if (i > 0 && i < y - 1 && j > 0 && j < x - 1)
        ft_putchar(empty);
    if (j == x-1)
        ft_putchar(n);
}

void    rush(int x, int y)
{
    int i;
    int j;

    i = 0;
	j = 0;
	if (x == 1 && y == 1)
		ft_putchar('A');
    else
    {
        while (i < y)
		{
			j = 0;
			while (j < x)
			{
				print_character('A', 'B', 'C', ' ', '\n', i, j, y, x);
				j = j + 1;
			}
			i = i + 1;
		}
	}
}
