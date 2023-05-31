/*Ecrire un programme qui écrit une suite de nombres de 1 à 100 sur la sortie 
standard, tous séparés par une newline. 

Si le nombre est un multiple de 3, le programme doit écrire 'fizz' à la place.

Si le nombre est un multiple de 5, le programme doit écrire 'buzz' à la place.

Si le nombre est un multiple de 3 et un multiple de 5, le programme doit écrire 
'fizzbuzz' à la place.*/

#include <unistd.h>

void	ft_write_numbers(int i)
{
	if (i > 9)
		ft_write_numbers(i / 10);
	write(1, &"0123456789"[i % 10], 1);
}

int	main(void)
{
	int	count;

	count = 1;
	while (count <= 100)
	{
		if (count % 15 == 0)
		{
			write(1, "fizzbuzz", 8);
			count++;
		}
		if (count % 3 == 0)
		{
			write(1, "fizz", 4);
			count++;
		}
		if (count % 5 == 0)
		{
			write(1, "buzz", 4);
			count++;
		}
		else
			ft_write_numbers(count);
		count++;
	}
}