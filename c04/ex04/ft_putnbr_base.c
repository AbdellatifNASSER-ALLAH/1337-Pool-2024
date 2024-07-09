/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnasse <abdnasse@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 18:51:55 by abdnasse          #+#    #+#             */
/*   Updated: 2024/07/09 09:14:12 by abdnasse         ###   ########.fr       */
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

void	ft_putnbr_base(int nbr, char *base)
{
	int long	nb;

	nb = nbr;
	if (invalid_args(base, ft_strlen(base)))
		return ;
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb < ft_strlen(base))
	{
		ft_putchar(base[nb]);
	}
	else
	{
		ft_putnbr_base(nb / ft_strlen(base), base);
		ft_putchar(base[nb % ft_strlen(base)]);
	}
}
