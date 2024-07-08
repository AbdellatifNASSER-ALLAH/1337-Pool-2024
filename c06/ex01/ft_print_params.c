/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnasse <abdnasse@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 13:28:23 by abdnasse          #+#    #+#             */
/*   Updated: 2024/07/08 13:34:33 by abdnasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int ac, char **av)
{
	if (ac > 0)
	{
		int	i;

		i = 1;
		while (av[i])
		{
			ft_putstr(av[i++]);
			ft_putstr("\n");
		}
	}
	return (0);
}
