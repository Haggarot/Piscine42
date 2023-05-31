/*
Write a function that displays all digits in ascending order.

Your function must be declared as follows:

void	ft_print_numbers(void);
*/

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	numbers[10];
	int		count;

	numbers = "0123456789";
	count = 0;

	while (numbers[count])
	{
		write(1, &numbers, 1);
		count++;
	}
	return ;
}

