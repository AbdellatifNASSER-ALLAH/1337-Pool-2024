/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnasse <abdnasse@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 10:34:24 by abdnasse          #+#    #+#             */
/*   Updated: 2024/07/07 11:14:11 by abdnasse         ###   ########.fr       */
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

char	*ft_to_decimal(char *s, char *b)
{
	int	i;
	int	j;

	i = 0;
	while(s[i])
	{
		j = 0;
		while (b[j])
		{
			if (s[i] == b[j])
				if(
					s[i] = j + '0';
			j++;
		}
		i++;
	}
	return (*s);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sing;
	int	res;

	if (invalid_args(base, ft_strlen(base)))
		return;
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
	ft_to_decimal(str, base);
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10  + (*str - '0');
		str++;
	}
	return (sing * res);
}
