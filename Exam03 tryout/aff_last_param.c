/*Assignment name  : aff_last_param
Expected files   : aff_last_param.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes strings as arguments, and displays its last
argument followed by a newline.

If the number of arguments is less than 1, the program displays a newline.
*/

#include <unistd.h>

int	main(int ac, char** av)
{
	int	i;

	i = 0;
	if (ac == 0)
		write(1, "/n", 1);
	while (av[ac - 1][i])
	{
		write(1, &av[ac - 1][i], 1);
		i++;
	}
	write(1, "/n", 1);
	return (0);
}