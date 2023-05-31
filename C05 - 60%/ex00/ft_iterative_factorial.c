/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbianchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 12:41:47 by nbianchi          #+#    #+#             */
/*   Updated: 2023/05/24 14:06:05 by nbianchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = nb;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	while (nb > 1)
	{
		fact = fact * (nb - 1);
		--nb;
	}
	return (fact);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_factorial(0));
	return (0);
}
*/
