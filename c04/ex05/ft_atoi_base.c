/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnasse <abdnasse@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 10:34:24 by abdnasse          #+#    #+#             */
/*   Updated: 2024/07/08 19:02:20 by abdnasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	invalid_args(char *b, int c)
{
	char *d;

	if(c < 1)
		return (1);
	while (*b)
	{
		d = b;
		while(*d)
		{
			if (*b == *(d + 1) || *d == '-'  || *d == '+')
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
	int i;

	i = 0;
	while (b[i])
	{
		if (b[i] == c)
			return (i);
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sing;
	int	res;
	int	blen;

	blen = ft_strlen(base);
	if (invalid_args(base, blen))
		return 0;
	sing = 1;
	res = 0;
	while (*str == ' ' || *str == '\t')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sing *= -1;
		str++;
	}
	while (*str && ft_in_base(base, *str))
		res = res * blen + ft_to_decimal(base, *str++);

	return (sing * res);
}
