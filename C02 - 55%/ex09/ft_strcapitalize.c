/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbianchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:24:20 by nbianchi          #+#    #+#             */
/*   Updated: 2023/05/22 13:57:04 by nbianchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	pre;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		pre = i - 1;
		if (i == 0 && str[i] <= 'z' && str[i] >= 'a')
		{
			str[i] -= 32;
		}
		if ((str[i] <= 'z' && str[i] >= 'a')
			&& ((str[pre] <= '\r' && str[pre] >= '\a')
				|| (str[pre] <= '/' && str[pre] >= ' ')
				|| (str[pre] >= ':' && str[pre] <= '?')))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
