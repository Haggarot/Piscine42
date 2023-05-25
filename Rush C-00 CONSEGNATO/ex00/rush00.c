/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbianchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 17:39:09 by nbianchi          #+#    #+#             */
/*   Updated: 2023/05/14 17:42:02 by nbianchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x);

void	f_custom_1(int counter, int i, char p, char s)
{
	while (counter <= i)
	{
		if (counter == 1 || counter == i)
			ft_putchar(p);
		else
			ft_putchar(s);
		counter++;
	}
	counter = 1;
	write(1, "\n", 1);
}

void	f_custom_2(int counter, int i, char t)
{
	while (counter <= i)
	{
		if (counter == 1 || counter == i)
			ft_putchar(t);
		else
			write(1, " ", 1);
		counter++;
	}
	counter = 1;
	write(1, "\n", 1);
}

void	rush00(int x, int y)
{
	char	a;
	char	b;
	char	c;
	int		counter_x;
	int		counter_y;

	a = 'o';
	b = '-';
	c = '|';
	counter_x = 1;
	counter_y = 1;
	if (x > 0 && y > 0)
	{	
		while (counter_y <= y)
		{
			if (counter_y == 1 || counter_y == y)
				f_custom_1(counter_x, x, a, b);
			else
				f_custom_2(counter_x, x, c);
			counter_y++;
		}
	}
	else
		write(1, "x e y devono essere maggiori di zero.", 37);
}
