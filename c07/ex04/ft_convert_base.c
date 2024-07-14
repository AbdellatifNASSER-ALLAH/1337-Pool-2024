/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnasse <abdnasse@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 22:30:51 by abdnasse          #+#    #+#             */
/*   Updated: 2024/07/14 04:46:02 by abdnasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_convert_base2.c"
#include <unistd.h>
#include <stdio.h>
void	ft_to_base(int nb, char *base, char **p)
{
	if (nb < 0)
	{
		**p = '-';
		(*p)++;
		nb *= -1;
	}
	if (nb >= ft_strlen(base))
		ft_to_base(nb / ft_strlen(base), base, p);
	**p = base[nb % ft_strlen(base)];
	(*p)++;
}

int	ft_atoi_base(char *str, char *base)
{
	int	sing;
	int	res;
	int	blen;

	blen = ft_strlen(base);
	sing = 1;
	res = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sing *= -1;
		str++;
	}
	while (*str && ft_in_base(base, *str))
		res = res * blen + ft_to_decimal(base, *str++);
	return (sing * res);
}

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*p;
	char	*conv;
	int	res;
	int	len;

	if (invalid_args(base_from, ft_strlen(base_from)))
		return (NULL);
	if (invalid_args(base_to, ft_strlen(base_to)))
		return (NULL);
	res = ft_atoi_base(nbr, base_from);
	len = ft_intlen(res) + 1;
	p = (char *)malloc(len * sizeof(char));
	if (p == NULL)
		return (NULL);
	conv = p;
	ft_to_base(res, base_to, &p);
	*p = '\0';;
	return (conv);
}
