/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnasse <abdnasse@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 22:30:51 by abdnasse          #+#    #+#             */
/*   Updated: 2024/07/10 22:56:14 by abdnasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_convert_base2.c"

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

int	ft_atoi_base(char *str, char *base)
{
	int	sing;
	int	res;
	int	blen;

	blen = ft_strlen(base);
	if (invalid_args(base, blen))
		return (0);
	sing = 1;
	res = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
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

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
}
