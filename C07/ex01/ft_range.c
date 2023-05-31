#include <unistd.h>

int* ft_range(int min, int max)
{
/*
	int* numbers;
	int	count;

	numbers = (int*)malloc((max - min) * sizeof(int));
	if (!numbers)
		return (0);
	else
		count = min;
*/
	int	array[max - min];
	int	count;
	
	count = 0;
	while (min < max)
	{
		array[count] = min;
		count++;
		min++;
	}
	return (array);
}