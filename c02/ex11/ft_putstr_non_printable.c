/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnasse <abdnasse@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 11:02:57 by abdnasse          #+#    #+#             */
/*   Updated: 2024/07/03 14:40:02 by abdnasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_to_hex(unsigned char c)
{
	char	*hex_d;

	hex_d = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(hex_d[c / 16]);
	ft_putchar(hex_d[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str > 126)
		{
			ft_to_hex((unsigned char)*str);
		}
		else
		{
			ft_putchar(*str);
		}
		str++;
	}
}
