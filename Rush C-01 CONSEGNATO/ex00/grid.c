/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbianchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 14:25:51 by nbianchi          #+#    #+#             */
/*   Updated: 2023/05/21 14:27:04 by nbianchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	**create_grid(void)
{
	int	i;
	int	**grid;

	grid = (int **)malloc(sizeof(int *) * N);
	if (!grid)
		return (NULL);
	i = 0;
	while (i < N)
	{
		grid[i] = (int *)malloc(sizeof(int) * N);
		if (!grid[i])
			return (NULL);
		i++;
	}
	return (grid);
}

void	free_grid(int **grid)
{
	int	i;

	i = 0;
	while (i < N)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
/* README
	int **create_grid(void)
Questa funzione crea una griglia 4x4 utilizzando la memoria dinamica.

Prima, alloca memoria per 4 puntatori a intero (le righe della griglia).
Se l'allocazione fallisce, restituisce NULL.

Poi, per ogni riga, alloca memoria per 4 interi (le colonne della griglia).
Se l'allocazione fallisce, restituisce NULL.

Alla fine, restituisce un puntatore al puntatore della griglia.

Si noti che la griglia creata con questa funzione deve essere liberata
con la funzione free_grid per evitare perdite di memoria.

	void free_grid(int **grid)
Questa funzione libera la memoria utilizzata da una griglia 4x4.

Prima, libera la memoria di ogni riga della griglia.

Poi, libera la memoria del puntatore alla griglia stessa.

Si noti che questa funzione dovrebbe essere utilizzata per liberare
la memoria di una griglia creata con la funzione create_grid.

Non utilizzare questa funzione su griglie che non siano state allocate
dinamicamente, altrimenti potrebbe causare errori.
*/
