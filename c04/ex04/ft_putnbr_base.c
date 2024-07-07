/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnasse <abdnasse@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 18:51:55 by abdnasse          #+#    #+#             */
/*   Updated: 2024/07/07 14:49:40 by abdnasse         ###   ########.fr       */
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

void	ft_putnbr_base(int nbr, char *base)
{
//	nbr = (long)nbr;
	if (invalid_args(base, ft_strlen(base)))
		return;
	if ( nbr == -2147483648)
	{
		write(1,"-2147483648", 11);
		return;
	}
	if (nbr < 0){
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr < ft_strlen(base))
	{
		ft_putchar(base[nbr]);
	}
	else
	{
		ft_putnbr_base(nbr / ft_strlen(base), base);
		ft_putchar(base[nbr % ft_strlen(base)]);
	}

}
