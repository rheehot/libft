int	sign_check(char *str, int *i)
{
	int	sign;

	sign = 1;
	while (str[*i] && (str[*i] == '+' || str[*i] == '-'))
	{
		if (str[*i] == '-')
			sign *= -1;
		*i = *i + 1;
	}
	return (sign);
}

int	ft_atoi(char	*str)
{
	int	i;
	int	sign;
	int	a;

	i = 0;
	a = 0;
	while (str[i] && (str[i] == '\f' || str[i] == '\t' || str[i] == ' ' || \
	str[i] == '\n' || str[i] == '\r' || str[i] == '\v'))
		i ++;
	sign = sign_check(str, &i);
	while (str[i])
	{
		if (47 < str[i] && str[i] < 58)
			a = a * 10 + (str[i] - '0');
		else
			break ;
		i ++;
	}
	a = a * sign;
	return (a);
}