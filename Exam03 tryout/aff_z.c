/*
Write a program that takes a string, and displays the first 'z'
character it encounters in it, followed by a newline. If there are no
'z' characters in the string, the program writes 'z' followed
by a newline. If the number of parameters is not 1, the program displays
'z' followed by a newline.
*/

#include <unistd.h>

int	main(int ac, char **av)
{
	(void)av;
	(void)ac;

	write(1, "z\n", 2);
	return (0);
}