/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnasse <abdnasse@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 14:16:22 by abdnasse          #+#    #+#             */
/*   Updated: 2024/07/18 03:20:24 by abdnasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	while (*charset)
	{
		if (*charset == c)
			return (1);
		charset++;
	}
	return (0);
}

int	ft_size(char *str, char *sep)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && is_sep(*str, sep))
			str++;
		if (*str)
			count++;
		while (*str && !is_sep(*str, sep))
			str++;
	}
	return (count);
}

int	ft_appand(char *word, char *str, int j, char *sep)
{
	int		i;

	i = 0;
	while (str[j] && !is_sep(str[j], sep))
		word[i++] = str[j++];
	word[i] = '\0';
	return (j);
}

char	*ft_strdup(char *str, int *index, char *sep, int slen)
{
	char	*word;
	int		i;
	int		len;

	i = *index;
	len = 0;
	while (str[i] && is_sep(str[i], sep))
		i++;
	*index = i;
	while (str[i] && !is_sep(str[i], sep))
	{
		len++;
		i++;
	}
	len = len + (slen * 2) + 1;
	word = (char *)malloc(len * sizeof(char));
	*index = ft_appand(word, str, *index, sep);
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**p;
	int		size;
	int		slen;
	int		i;
	int		index;

	index = 0;
	size = ft_size(str, charset) + 1;
	p = (char **)malloc(size * sizeof(char *));
	if (p == NULL)
		return (NULL);
	slen = 0;
	while (charset[slen])
		slen++;
	i = 0;
	while (i < size - 1)
	{
		p[i] = ft_strdup(str, &index, charset, slen);
		i++;
	}
	p[i] = 0;
	return (p);
}
