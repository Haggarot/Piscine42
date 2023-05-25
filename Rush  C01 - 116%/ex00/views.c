/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   views.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbianchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 15:18:32 by nbianchi          #+#    #+#             */
/*   Updated: 2023/05/21 15:28:42 by nbianchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	is_valid_char(char c)
{
	return (c >= '1' && c <= (N + '0'));
}

int	count_numbers(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (is_valid_char(str[i]))
			count++;
		else if (str[i] != ' ')
			return (-1);
		i++;
	}
	return (count);
}

int	*create_views_array(char *views_str)
{
	int	i;
	int	j;
	int	*views;

	if (count_numbers(views_str) != (N * 4))
		return (NULL);
	views = (int *)malloc(sizeof(int) * (N * 4));
	if (!views)
		return (NULL);
	i = 0;
	j = 0;
	while (views_str[i] && j < (N * 4))
	{
		if (is_valid_char(views_str[i]))
		{
			views[j] = views_str[i] - '0';
			j++;
		}
		i++;
	}
	return (views);
}
/*READ ME
	int is_valid_char(char c)
Questa funzione controlla se un carattere rappresenta un numero valido per 
il gioco.
Un numero è valido se è un carattere tra '1' e '4'.
Se il carattere è valido, restituisce 1, altrimenti restituisce 0.

	int count_numbers(char *str)
Questa funzione conta il numero di caratteri validi in una stringa.
Per ogni carattere nella stringa, se è un carattere valido,
incrementa un contatore.

Se il carattere non è né un carattere valido né uno spazio,
restituisce -1, indicando che la stringa contiene caratteri non validi.

Altrimenti, restituisce il numero di caratteri validi nella stringa.

	int *create_views_array(char *views_str)
Questa funzione crea un array di "viste" da una stringa.

Prima, controlla se la stringa contiene esattamente 16 numeri validi.

Se non lo fa, restituisce NULL.

Poi, alloca memoria per un array di 16 interi.

Se l'allocazione fallisce, restituisce NULL.

Infine, percorre la stringa e per ogni carattere valido,
lo converte in un intero e lo aggiunge all'array.

Ritorna un puntatore all'array di "viste".

Si noti che la memoria dell'array dovrebbe essere liberata quando
non è più necessaria.
*/
