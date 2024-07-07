/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnasse <abdnasse@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 09:09:47 by abdnasse          #+#    #+#             */
/*   Updated: 2024/07/05 10:34:05 by abdnasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char *av[])
{
	char *s;

	s = av[1];
	if (ac == 2)
	{
		while (*s)
		{
			if ((*s >= 'a' && *s <= 'm') || (*s >= 'A' && *s <= 'M'))
			{
				ft_putchar(*s +  13);
			}
			else if ((*s >= 'n' && *s <= 'z') || (*s >= 'N' && *s <= 'Z'))
			{
				ft_putchar(*s - 13);
			}
			else
				ft_putchar(*s);
			s++;
		}
	}
	write(1, "\n",1);
	return (0);
}
