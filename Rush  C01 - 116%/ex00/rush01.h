/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbianchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 15:29:58 by nbianchi          #+#    #+#             */
/*   Updated: 2023/05/21 15:52:02 by nbianchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H
# define N 4
# include <unistd.h>
# include <stdlib.h>

void	print_grid(int **grid);
int		check_arguments(int argc);
int		*initialize_grid(char *arg, int ***grid);
int		fill_grid(int **grid, int *views, int row, int col);
int		are_numbers_unique(int *arr, int size);
int		is_valid_rows(int **grid, int *views);
int		is_valid_cols(int **grid, int *views);
int		is_valid_grid(int **grid, int *views);
int		is_valid_placement(int **grid, int row, int col, int num);
int		count_visible_boxes(int *row);
int		count_visible_boxes_reverse(int *boxes);
int		is_valid_char(char c);
int		count_numbers(char *str);
int		*create_views_array(char *views_str);
int		**create_grid(void);
void	free_grid(int **grid);

#endif
/*N e' il lato della matrice del gioco*/
