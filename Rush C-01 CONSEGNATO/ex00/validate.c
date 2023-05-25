/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbianchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 14:55:45 by nbianchi          #+#    #+#             */
/*   Updated: 2023/05/21 15:17:59 by nbianchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	are_numbers_unique(int *arr, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] == arr[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	is_valid_rows(int **grid, int *views)
{
	int	i;

	i = 0;
	while (i < N)
	{
		if (count_visible_boxes(grid[i]) != views[i]
			|| count_visible_boxes_reverse(grid[i]) != views[i + N]
			|| !are_numbers_unique(grid[i], N))
			return (0);
		i++;
	}
	return (1);
}

int	is_valid_cols(int **grid, int *views)
{
	int	i;
	int	j;
	int	col[N];

	i = 0;
	while (i < N)
	{
		j = 0;
		while (j < N)
		{
			col[j] = grid[j][i];
			j++;
		}
		if (count_visible_boxes(col) != views[i + (N * 2)]
			|| count_visible_boxes_reverse(col) != views[i + (N * 3)]
			|| !are_numbers_unique(col, N))
			return (0);
		i++;
	}
	return (1);
}

int	is_valid_grid(int **grid, int *views)
{
	if (!is_valid_rows(grid, views))
		return (0);
	if (!is_valid_cols(grid, views))
		return (0);
	return (1);
}
/*READ ME
int are_numbers_unique(int *arr, int size)
Questa funzione controlla se tutti i numeri in un array sono unici.

Per ogni numero nell'array, controlla tutti i numeri successivi nell'array
per vedere se sono uguali.

Se trova due numeri uguali, restituisce 0, indicando che i numeri nell'array
non sono unici.

Se non trova nessun numero duplicato, restituisce 1, indicando che tutti
i numeri nell'array sono unici.

	int is_valid_rows(int **grid, int *views)
Questa funzione controlla se tutte le righe in una griglia 4x4 sono valide.
Per ogni riga, controlla tre cose:
- Se il numero di "scatole" visibili è uguale al valore corrispondente
nell'array delle "viste".

- Se il numero di "scatole" visibili in ordine inverso è uguale al valore
corrispondente nell'array delle "viste".

- Se tutti i numeri nella riga sono unici.

Se uno qualsiasi di questi controlli fallisce, la funzione restituisce 0,
indicando che le righe non sono valide.

Se tutti i controlli passano, la funzione restituisce 1,
indicando che tutte le righe sono valide.

	int is_valid_cols(int **grid, int *views)
Questa funzione è simile alla precedente controlla le colonne e non le  righe.
Per ogni colonna, crea un array temporaneo con i valori della colonna.
Poi controlla tre cose:
- Se il numero di "scatole" visibili è uguale al valore corrispondente
nell'array delle "viste".

- Se il numero di "scatole" visibili in ordine inverso è uguale al valore
corrispondente nell'array delle "viste".

- Se tutti i numeri nella colonna sono unici.

Se uno qualsiasi di questi controlli fallisce, la funzione restituisce 0,
indicando che le colonne non sono valide.

Se tutti i controlli passano, la funzione restituisce 1,
indicando che tutte le colonne sono valide.

	int is_valid_grid(int **grid, int *views)
Questa funzione controlla se una griglia 4x4 è valida.
Prima controlla se tutte le righe sono valide con la funzione is_valid_rows.
Se le righe non sono valide, restituisce 0.
Poi controlla se tutte le colonne sono valide con la funzione is_valid_cols.
Se le colonne non sono valide, restituisce 0.
Se sia le righe che le colonne sono valide, allora la funzione restituisce 1,
indicando che la griglia è valida.
*/
