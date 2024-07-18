/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnasse <abdnasse@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 14:26:25 by abdnasse          #+#    #+#             */
/*   Updated: 2024/07/18 14:57:46 by abdnasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	sorted;

	sorted = 1;
	i = 0;
	while (i < length - 1 && sorted)
	{
		if (f(tab[i], tab[i + 1]) <= 0)
			sorted = 0;
		i++;
	}
	if (sorted != 1)
	{
		sorted = 1;
		i = 0;
		while (i < length - 1)
		{
			if (f(tab[i], tab[i + 1]) >= 0)
				return (0);
			i++;
		}
	}
	return (1);
}
