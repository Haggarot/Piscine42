/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbianchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 14:41:12 by nbianchi          #+#    #+#             */
/*   Updated: 2023/05/24 14:58:39 by nbianchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 1)
		return (nb);
	else if (power > 1)
		return (ft_recursive_power(nb, power - 1) * nb);
	else
		return (1);
}
/*
int	main(void)
{
	printf("%d", ft_recursive_power(2, 5));
}
*/
