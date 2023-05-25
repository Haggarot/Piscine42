/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   support.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbianchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 13:41:54 by nbianchi          #+#    #+#             */
/*   Updated: 2023/05/21 15:39:14 by nbianchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	print_grid(int **grid)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < N)
	{
		j = 0;
		while (j < N)
		{
			c = grid[j][i] + '0';
			write(1, &c, 1);
			if (j < (N + '0'))
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	check_arguments(int argc)
{
	if (argc != 2)
	{
		write(1, "Error: wrong number of arguments\n", 33);
		return (0);
	}
	return (1);
}

int	*initialize_grid(char *arg, int ***grid)
{
	int	*views;

	views = create_views_array(arg);
	if (!views)
	{
		write(1, "Error: invalid views\n", 20);
		return (NULL);
	}
	*grid = create_grid();
	if (!*grid)
	{
		write(1, "Error: could not allocate memory for grid\n", 41);
		free(views);
		return (NULL);
	}
	return (views);
}
/*READ ME
	void print_grid(int **grid)
Questa funzione stampa una griglia 4x4 sulla console.

Percorre ogni riga e ogni colonna della griglia, convertendo ogni numero
in un carattere e scrivendolo sulla console.

Dopo ogni numero, stampa uno spazio, a meno che non sia l'ultimo numero
di una riga.

Dopo ogni riga, stampa un carattere di nuova riga.

Si noti che questa funzione presume che i numeri nella griglia siano
cifre singole (da 0 a 9), poiché convertendo numeri più grandi in caratteri
potrebbe non funzionare correttamente.

	int check_arguments(int argc)
Questa funzione controlla se il numero di argomenti passati al
programma è corretto.

Se il numero di argomenti non è 2 (che include il nome del programma stesso)
stampa un messaggio di errore sulla console e restituisce 0.

Altrimenti, restituisce 1, indicando che il numero di argomenti è corretto.

	int *initialize_grid(char *arg, int ***grid)
Questa funzione inizializza una griglia e un array di "viste"
basato su una stringa di argomenti.

Prima, crea l'array di "viste" utilizzando la funzione create_views_array.
Se la creazione fallisce, stampa un messaggio di errore sulla console e
restituisce NULL.

Poi, crea la griglia utilizzando la funzione create_grid.
Se la creazione fallisce, stampa un messaggio di errore sulla console,
libera la memoria dell'array di "viste" e restituisce NULL.

Alla fine, restituisce un puntatore all'array di "viste".
Si noti che la memoria dell'array di "viste" e della griglia dovrebbe
essere liberata quando non è più necessaria.
*/
