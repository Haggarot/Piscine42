int	ft_atoi(char *str)
{
	short	odd;
	int		nbr;

	odd = nbr = 0;

	while ((*str >= 9 && *str <= 13) || *str == 32)
	{
		++str;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			odd++;
		++str;
	}
	while (*str >= 48 && *str <= 57)
	{
		nbr *= 10;
		nbr += *str - 48;
		++str;
	}
	if (!(parity % 2))
		return (nbr);
	return (-nbr);
}