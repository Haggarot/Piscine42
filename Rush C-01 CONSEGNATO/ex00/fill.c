/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbianchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 14:03:37 by nbianchi          #+#    #+#             */
/*   Updated: 2023/05/21 14:10:01 by nbianchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	fill_grid(int **grid, int *views, int row, int col)
{
	int	num;

	if (row == N)
		return (is_valid_grid(grid, views));
	if (col == N)
		return (fill_grid(grid, views, row + 1, 0));
	num = 1;
	while (num <= N)
	{
		if (is_valid_placement(grid, row, col, num))
		{
			grid[row][col] = num;
			if (fill_grid(grid, views, row, col + 1))
				return (1);
			grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}
/*READ ME
    1)se abbiamo riempito interamente la griglia ed e' valida, abbiamo finito.
    2) se abbiamo raggiunto la fine della riga, ci spostiamo alla prossima.
    3) prova ogni numero da 1 a 4;
    4) controlla se il numero puo' essere posizionato nella cella corrente.
    5) mette il numero nella cella corrente
    6) ricorsivamente, riempie il resto della griglia (passaggi da 1 a 5)
    7) se non si riesce a riempire il resto della griglia, rimuove il numero
    dalla cella corrente.
    8) prova il prossimo numero
    9) se nessun numero puo essere piazzato nella cella corrente, ritorna 0

    Questa funzione inizia controllando se ha riempito l'intera griglia. 
    Se e cosi, controlla se la griglia e valida e, in caso affermativo, 
    restituisce 1 per indicare che ha trovato una soluzione. 
    Se non ha ancora riempito l'intera griglia, prova a posizionare ogni 
    numero da 1 a 4 nella cella corrente. 
    Se trova un numero che può essere 
    posizionato nella cella corrente, lo posiziona li e poi chiama se stessa 
    ricorsivamente per riempire il resto della griglia. 
    Se non riesce a riempire il resto della griglia, rimuove il numero dalla 
    cella corrente e prova il numero successivo. 
    Se non riesce a trovare un numero che puo essere posizionato
    nella cella corrente, restituisce 0 per indicare che non ha trovato 
    una soluzione.
*/
