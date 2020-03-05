/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cillaoi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 05:43:32 by cillaoi           #+#    #+#             */
/*   Updated: 2020/03/05 06:31:30 by cillaoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = -1;
	while (++i <= 9)
	{
		j = i;
		while (++j <= 9)
		{
			k = j;
			while (++k <= 9)
			{
				ft_putchar(i + '0');
				ft_putchar(j + '0');
				ft_putchar(k + '0');
				if (i != 7 && j != 8 && k != 9)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
