int	ft_atoi(const char *nptr)
{
	int	i;
	int	output;
	int	sign;

	i = 0;
	output = 0;
	sign = 1;

	while (((9 <= nptr[i]) && (nptr[i] <= 13)) || (nptr[i] == ' '))
		i++;
	if ((nptr[i] == '-') || (nptr[i] == '+'))
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (('0' <= nptr[i]) && (nptr[i] <= '9'))
	{
		output = nptr[i] - '0' + (output * 10);
		i++;
	}
	return (output * sign);
}
