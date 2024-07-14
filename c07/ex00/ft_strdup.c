/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnasse <abdnasse@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 19:37:36 by abdnasse          #+#    #+#             */
/*   Updated: 2024/07/13 22:00:36 by abdnasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		n;
	char	*p;

	n = 0;
	while (src[n])
		n++;
	p = (char *)malloc(n * sizeof(char) + 1);
	n = 0;
	while (src[n])
	{
		p[n] = src[n];
		n++;
	}
	p[n] = '\0';
	return (p);
}
