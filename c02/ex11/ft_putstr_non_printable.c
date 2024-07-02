/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnasse <abdnasse@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 11:02:57 by abdnasse          #+#    #+#             */
/*   Updated: 2024/07/02 14:35:33 by abdnasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_to_hex(char n)
{
	char	*hex_d;

	hex_d = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(hex_d[n / 16]);
	ft_putchar(hex_d[n % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str == 127)
		{
			ft_to_hex(*str);
		}
		else
		{
			ft_putchar(*str);
		}
		str++;
	}
}
