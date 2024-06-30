/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnasse <abdnasse@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 16:00:55 by abdnasse          #+#    #+#             */
/*   Updated: 2024/06/29 18:12:22 by abdnasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int a, int b, int c, int d)
{
	ft_putchar(a + '0');
	ft_putchar(b + '0');
	ft_putchar(' ');
	ft_putchar(c + '0');
	ft_putchar(d + '0');
	if (!(c == 9 && d == 9 && a == 9 && b == 8))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_print(i / 10, i % 10, j / 10, j % 10);
			j++;
		}
		i++;
	}
}
