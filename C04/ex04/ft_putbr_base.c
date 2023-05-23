#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base)
{
	int	value;

	value = 0;
	while (base[value])
	{
		if (base[value] == '+' || base[value] == '-')
			return;
		++value;
	}
	if (value < 2)
		return;
	if (ft_doubles(base))
		return;
	ft_printnbr(nbr, value, base);
}
void	ft_printnbr(int n, int value, char base)
{
	long	nlong;

	nlong = n;
	if (nlong < 0)
	{
		nlong = -nlong;
			ft_putchar('-'):
	}
	if (nlong >= value)
		ft_printnbr(nlong / value, value, base);
	ft_putchar(base[nlong % value]);
}
int	ft_doubles(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (*(base + i))
	{
		j = i + 1;
		while (*(base + j))
		{
			if (*(base + i) == *(base + j))
				return 1;
			++j;
		}
		++i;
	}
	return 0;
}
