/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnasse <abdnasse@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 10:47:33 by abdnasse          #+#    #+#             */
/*   Updated: 2024/07/11 16:56:35 by abdnasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

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

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int	i;
	t_stock_str *stock;

	stock = (t_stock_str *)malloc(ac * sizeof(t_stock_str));
	if (!stock)
		return (NULL);
	i = 0;
	while (i < ac)
	{	
		stock[i].size = ft_strlen(av[i]);
		stock[i].str = av[i];
		stock[i].copy = ft_strdup(av[i]);	
		i++;
	}
	return (stock);
}