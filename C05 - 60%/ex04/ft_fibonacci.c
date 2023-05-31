/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbianchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 11:49:04 by nbianchi          #+#    #+#             */
/*   Updated: 2023/05/29 12:14:05 by nbianchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <unistd.h>

int	ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	if (index < 0)
		return (-1);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}
/*
int	main(void)
{
	printf("%d", ft_fibonacci(23));
}
*/
