/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbianchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 13:24:30 by nbianchi          #+#    #+#             */
/*   Updated: 2023/05/21 13:35:25 by nbianchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	main(int argc, char **argv)
{
	int	**grid;
	int	*views;

	grid = NULL;
	views = NULL;
	if (!check_arguments(argc))
		return (1);
	views = initialize_grid(argv[1], &grid);
	if (!views)
		return (1);
	if (!fill_grid(grid, views, 0, 0) || !is_valid_rows(grid, views)
		|| !is_valid_cols(grid, views))
	{
		write(1, "Error: could not solve puzzle\n", 29);
		free_grid(grid);
		free(views);
		return (1);
	}
	print_grid(grid);
	free_grid(grid);
	free(views);
	return (0);
}
/*GRADE ME
Questa è la funzione principale del programma.
Quando l'utente avvia il programma, questa funzione viene chiamata per prima.

I passaggi principali eseguiti da questa funzione sono:

1. Controlla che il numero di argomenti passati al programma sia corretto
con la funzione 'check_arguments'.
Se non lo è, il programma termina con un codice di uscita 1.

2. Chiama la funzione 'initialize_grid' per creare l'array di "viste"
e inizializzare la griglia del gioco. Se ci sono problemi in questo passaggio
(ad esempio, se l'argomento fornito dall'utente non contiene 16 numeri validi
o se non è possibile allocare memoria per la griglia)
il programma termina con un codice di uscita 1.

3. Tenta di riempire la griglia e risolvere il puzzle con la funzione
'fill_grid'. Se non riesce a risolvere il puzzle o se la griglia risolta
non rispetta le regole del gioco (come verificato dalle funzioni 'is_valid_rows'
e 'is_valid_cols'), stampa un messaggio di errore, libera la memoria allocata
per la griglia e l'array di "viste", e termina con un codice di uscita 1.

4. Se il puzzle è risolto con successo, stampa la griglia risolta
con la funzione 'print_grid'.

5. Infine, libera la memoria allocata per la griglia e l'array di "viste"
termina con un codice di uscita 0 per indicare che tutto è andato bene.

La funzione 'main' restituisce un intero che rappresenta il codice di uscita
Un codice di uscita 0 indica che il programma è terminato con successo
mentre un codice di uscita non zero indica che si è verificato un errore.
*/
