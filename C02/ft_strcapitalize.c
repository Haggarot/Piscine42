char *ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char* ft_strcapitalize(char *str)
{
	int	i;
	int	post;
	int	pre;

	i = 0;
	post = i + 1;
	pre = i - 1;

	ft_strlowcase(str)
	
	while (str[i] != '/0')
		if (i == 0 && str[i] <= 'z' && str[i] >= 'a')
		{
			str[i] += 32;
			i++;
		}
		
		else if (str[pre] >= 48 && str[pre] <= 57)
		{
			i++;
		}
		else if (str[i] <= 'z' && str[i] >= 'a') || str[pre] == 21 || str[pre] <= 46 && str[pre] >= 43)
		
		
		
		else if (str[i] == 20 && str[post] <= 'z' && str[post] >= 'a')
		{
			str[post] -= 32;
			i++;
		}
}