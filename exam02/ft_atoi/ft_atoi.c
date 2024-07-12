

int	ft_atoi(const char *str)
{
	int res;
	int sgin;

	res = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
			str++;
	sgin = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sgin *= -1;
	    str++;
	}
	while (*str >= '0' && *str <= '9')
		res = res * 10 + (*(str++) - '0');
	return (res * sgin);
}
