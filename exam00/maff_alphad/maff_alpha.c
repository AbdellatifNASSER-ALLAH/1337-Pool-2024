/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnasse <abdnasse@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 10:15:25 by abdnasse          #+#    #+#             */
/*   Updated: 2024/06/27 10:15:30 by abdnasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	char	c;

	c = 'A';
	while (c <= 'Z')
	{
		if (c % 2 != 0)
		{
			c += 32;
			write(1, &c, 1);
			c -= 32;
		}
		else
		{
			write(1, &c, 1);
		}
		c++;
	}
	write(1, "\n", 1);
	return (0);
}
