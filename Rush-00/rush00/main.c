/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cillaoi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 06:23:36 by cillaoi           #+#    #+#             */
/*   Updated: 2020/03/08 06:23:38 by cillaoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "rush00.c"

void	rush(int x, int y);

int main() {
	int x;
	int y;

	x = 5;
	y = 1;
	rush(x, y);
	return 0;
}
