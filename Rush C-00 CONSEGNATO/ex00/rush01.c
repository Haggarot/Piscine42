/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbianchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 17:41:09 by nbianchi          #+#    #+#             */
/*   Updated: 2023/05/14 17:41:11 by nbianchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x);

void	f_custom_1(int counter, int i, char p, char t)
{
	while (counter <= i)
	{
		if (counter == 1)
			ft_putchar(p);
		else if (counter == i)
			ft_putchar(t);
		else
			write(1, "*", 1);
		counter++;
	}
	counter = 1;
	write(1, "\n", 1);
}

void	f_custom_2(int counter, int i)
{
	while (counter <= i)
	{
		if (counter == 1 || counter == i)
			write(1, "*", 1);
		else
			write(1, " ", 1);
		counter++;
	}
	counter = 1;
	write(1, "\n", 1);
}

void	f_custom_3(int counter, int i, char p, char t)
{
	while (counter <= i)
	{
		if (counter == 1)
			ft_putchar(t);
		else if (counter == i)
			ft_putchar(p);
		else
			write(1, "*", 1);
		counter++;
	}
	counter = 1;
	write(1, "\n", 1);
}

void	rush01(int x, int y)
{
	char	a;
	char	c;
	int		counter_x;
	int		counter_y;

	a = '/';
	c = 92;
	counter_x = 1;
	counter_y = 1;
	if (x > 0 && y > 0)
	{	
		while (counter_y <= y)
		{
			if (counter_y == 1)
				f_custom_1(counter_x, x, a, c);
			else if (counter_y == y)
				f_custom_3(counter_x, x, a, c);
			else
				f_custom_2(counter_x, x);
			counter_y++;
		}
	}	
	else
		write(1, "x e y devono essere maggiori di zero.", 37);
}
