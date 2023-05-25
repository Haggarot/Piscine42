int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 1)
	{
		result *= nb * ft_recursive_factorial(nb - 1);
		nb--;
	}
	return (result)
}