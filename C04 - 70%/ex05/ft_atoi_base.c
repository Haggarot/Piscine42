#include <unistd.h>

int	ft_atoi_base (char *str, char *base)
{
	int	value;
	int	position;
	int	final;
	int	sign;

	sign = +1;
	value = 0;
	position = 0;

	while (base[value])
	{
		if (base[value] == '+' || base[value] == '-' || base[value] == ' ')
		{
			return 0;
		}
		++value;
		if (base[value] < 2)
		{
			return 0,
		}
		if (ft_doubles(base) == 1)
		{
			return 0;
		}
	}
	while (*(str + position))
	{
		while (*str == '+' || *str == '-'
			|| (*str >= 9 && *str <= 13) || *str == 32)
		{
			if (*str == '-')
				sign *= -1;
			++str;
		}
		if ( ! ft_symbol_is_valid(*(str + position), base))
		{
			return 0;
		}
		++position;
	}
	return ft_realvalue(str, base, value, position - 1, sign);
}

int	ft_symbol_is_valid(char c, char *base)
{
	while ((c != *base) && *base)
	{
		base++;
	}
	if (!*base)
		return 0;
	return 1;
}

int	ft_doubles(char* base)
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

int	ft_realvalue(char* nbr, char* base, int value, int sign)
{
	int	i;

	i = 0;
	if (!position)
	{
		while (*nbr != *(symbols + i))
		{
			i++;
		}
		return i * sign;
	}
	else
	{
		while (*nbr != *(symbols + i))
		{
			++i;
		}
		return ft_realvalue(nbr + 1, base, value, position - 1, sign) + (i * ft_pow(value, position) * sign);
	}
}
