/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnasse <abdnasse@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 17:57:15 by abdnasse          #+#    #+#             */
/*   Updated: 2024/07/17 17:26:30 by abdnasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putnbr(int nbr)
{
	int long	nb;
	char		c;

	nb = nbr;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb < 10)
	{
		c = nb + '0';
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	while (par && par->str)
	{
		i = 0;
		while (par->str[i])
			write(1, &par->str[i++], 1);
		write(1, "\n", 1);
		ft_putnbr(par->size);
		write(1, "\n", 1);
		i = 0;
		while (par->copy[i])
			write(1, &par->copy[i++], 1);
		write(1, "\n", 1);
		par++;
	}
}
