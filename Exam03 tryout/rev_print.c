/*Write a function that takes a string and displays the string in reverse
order followed by the newline.
Its prototype is constructed like this : 
  char *ft_rev_print (char *str)
It must return its argument*/

#include<unistd.h>

char* ft_rev_print(char* str)
{
	int		len;
	int		i;
	char	swap;

	len = 0;
	while (str[len])
	{
		len++;
	}
	len--;
	while (str[len])
	{
		write(1, &str[len], 1);
		len--;
	}
	write(1, "\n", 1);
	return (str);
}