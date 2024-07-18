/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnasse <abdnasse@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 01:33:30 by abdnasse          #+#    #+#             */
/*   Updated: 2024/07/18 02:10:53 by abdnasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_in(char *charset, char c)
{
	while (*charset)
	{
		if (*charset == c)
			return (1);
		charset++;
	}
	return (0);
}

int	ft_count_words(char *str, char *sep)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i] && str)
	{
		while (str[i] && ft_is_in(sep, str[i]))
			i++;
		if (str[i] && !ft_is_in(sep, str[i]))
			count++;
		i++;
		while (str[i] && !ft_is_in(sep, str[i]))
			i++;
	}
	return (count);
}

void	ft_to_arr(char **p, int size, char *str, char *sep)
{
	int	i;
	int	j;
	int	k;
	int	sub;

	i = 0;
	j = 0;
	while (i < size)
	{
		while (str[j] && ft_is_in(sep, str[j]))
			j++;
		sub = j;
		while (str[j] && !ft_is_in(sep, str[j]))
			j++;
		p[i] = (char *)malloc((j - sub + 1) * sizeof(char));
		k = 0;
		j = sub;
		while (str[j] && !ft_is_in(sep, str[j]))
			p[i][k++] = str[j++];
		p[i][k] = '\0';
		i++;
	}
	p[i] = 0;
}

char	**ft_split(char *str, char *charset)
{
	char	**ptr;
	int		size;

	size = ft_count_words(str, charset);
	ptr = (char **)malloc((size + 1) * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	ft_to_arr(ptr, size, str, charset);
	return (ptr);
}
