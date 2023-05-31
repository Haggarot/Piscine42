/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbianchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 11:47:22 by nbianchi          #+#    #+#             */
/*   Updated: 2023/05/24 11:47:30 by nbianchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	short	odd;
	int		nbr;

	odd = 0;
	nbr = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
	{
		++str;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			odd++;
		++str;
	}
	while (*str >= 48 && *str <= 57)
	{
		nbr *= 10;
		nbr += *str - 48;
		++str;
	}
	if (!(odd % 2))
		return (nbr);
	return (-nbr);
}
