/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnasse <abdnasse@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 22:29:30 by abdnasse          #+#    #+#             */
/*   Updated: 2024/07/14 03:52:16 by abdnasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_intlen(int long n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

int	invalid_args(char *b, int c)
{
	char	*d;

	if (c < 2)
		return (1);
	while (*b)
	{
		d = b;
		while (*d)
		{
			if (*b == *(d + 1) || *d == '-' || *d == '+')
				return (1);
			else if ((*d >= 9 && *d <= 13) || *d == 32)
				return (1);
			d++;
		}
		b++;
	}
	return (0);
}
int	ft_in_base(char *base, char c)
{
	while (*base)
	{
		if (*base++ == c)
			return (1);
	}
	return (0);
}

int	ft_to_decimal(char *b, char c)
{
	int	i;

	i = 0;
	while (b[i])
	{
		if (b[i] == c)
			return (i);
		i++;
	}
	return (0);
}
