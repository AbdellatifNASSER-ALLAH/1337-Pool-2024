
int	ft_is_in(const char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return 1;
		str++;
	}
	return 0;
}

int	ft_strspn(const char *s, const char *reject)
{
	int i = 0;

	while  (s[i])
	{
		if (!ft_is_in(reject, s[i]))
				return i;
		i++;
	}
	return i;
}
