/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnasse <abdnasse@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 19:53:24 by abdnasse          #+#    #+#             */
/*   Updated: 2024/07/13 22:02:49 by abdnasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*p;
	int	i;

	if (max <= min)
		return (0);
	p = (int *)malloc((max - min) * sizeof(int));
	i = 0;
	while (min < max)
		p[i++] = min++;
	return (p);
}
