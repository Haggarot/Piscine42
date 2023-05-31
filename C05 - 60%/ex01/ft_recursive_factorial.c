/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbianchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:22:05 by nbianchi          #+#    #+#             */
/*   Updated: 2023/05/29 15:22:08 by nbianchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb > 0)
	{
		result *= nb * ft_recursive_factorial(nb - 1);
		nb -= 1;
	}
	if (nb < 0)
		return (0);
	return (result);
}
/*
int	main(void)
{
	printf("%i", ft_recursive_factorial(12));
}
*/
