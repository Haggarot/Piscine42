/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbianchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 13:53:42 by nbianchi          #+#    #+#             */
/*   Updated: 2023/05/21 14:03:09 by nbianchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	is_valid_placement(int **grid, int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < N)
	{
		if (grid[row][i] == num)
			return (0);
		i++;
	}
	i = 0;
	while (i < N)
	{
		if (grid[i][col] == num)
			return (0);
		i++;
	}
	return (1);
}

int	count_visible_boxes(int *row)
{
	int	i;
	int	max_height;
	int	count;

	max_height = 0;
	count = 0;
	i = 0;
	while (i < N)
	{
		if (row[i] > max_height)
		{
			max_height = row[i];
			count++;
		}
		i++;
	}
	return (count);
}

int	count_visible_boxes_reverse(int *boxes)
{
	int	i;
	int	count;
	int	max_height;

	count = 0;
	max_height = 0;
	i = N - 1;
	while (i >= 0)
	{
		if (boxes[i] > max_height)
		{
			max_height = boxes[i];
			count++;
		}
		i--;
	}
	return (count);
}
/*READ ME
	int is_valid_placement(int **grid, int row, int col, int num)
Questa funzione controlla se un numero (num) può essere inserito in una
specifica posizione riga, colonna di una griglia 4x4 (grid).

Controlla prima tutte le celle nella riga specificata: se trova una cella
nella stessa riga con lo stesso numero, restituisce 0
indicando che la posizione non è valida.

Poi controlla tutte le celle nella colonna specificata: se trova una
cella nella stessa colonna con lo stesso numero, restituisce 0
indicando che la posizione non è valida.

Se nessuna cella nella stessa riga o colonna contiene lo stesso numero,
allora la funzione restituisce 1, indicando che la posizione è valida.

	int count_visible_boxes(int *row)
Questa funzione conta il numero di "scatole" visibili in una riga di 4 scatole

Inizia con un'altezza massima di 0 e un conteggio di 0.
Poi percorre la riga: per ogni scatola
se l'altezza della scatola è maggiore dell'altezza massima corrente
incrementa il conteggio e aggiorna l'altezza massima.

Alla fine, restituisce il conteggio, che rappresenta il numero di scatole
visibili dalla posizione attuale.

Si suppone che le scatole più alte nascondano le scatole più basse
che si trovano dietro di esse.

	int count_visible_boxes_reverse(int *boxes)
Questa funzione è simile alla funzione count_visible_boxes, ma percorre
l'array di scatole in ordine inverso, da destra a sinistra.

Inizia con un conteggio di 0 e un'altezza massima di 0.

Poi percorre l'array di scatole: per ogni scatola, se l'altezza della scatola
è maggiore dell'altezza massima corrente, incrementa il conteggio
e aggiorna l'altezza massima.

Alla fine, restituisce il conteggio, che rappresenta il numero di scatole
visibili dalla posizione attuale, ma considerando la visuale da destra.

Anche qui, le scatole più alte nascondono le scatole più basse
che si trovano dietro di esse.
*/
