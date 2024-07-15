/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnasse <abdnasse@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 14:16:22 by abdnasse          #+#    #+#             */
/*   Updated: 2024/07/15 13:54:32 by abdnasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	while(*charset)
	{
		if (*charset == c)
			return (1);
		charset++;
	}
	return (0);
}

int	ft_size(char *str, char *sep)
{
	int count;

	count = 1;
	while (*str)
	{
		while(*str && is_sep(*str , sep))
			str++;
		if (*str)
			count++;
		while (*str && !is_sep(*str, sep))
			str++;
	}
	return (count);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str, int *index, char *sep, int slen)
{
	char	*word;
	char	*s2;
	int	i;
	int	len;

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
	word = (char *)malloc(len *sizeof(char));
	i = 0;
	s2 = sep;
	while (*sep)
		word[i++] = *sep++;
	while (str[*index] && !is_sep(str[*index], sep))
		word[i++] = str[*index++];
	while (*s2)
		word[i++] = *s2++;
	word[len] = '\0';
	return (word);	
}

char	**ft_split(char *str, char *charset)
{
	char	**p;
	int	size;
	int	i;
	int	index;

	size = ft_size(str, charset) + 1;
	p = (char **)malloc(size * sizeof(char *));
	if (p == NULL)
		return (NULL);
	i = 0;
	index = 0;
	while (i < size)
	{
		p[i] = ft_strdup(str, &index, charset, ft_strlen(charset));
		i++;
	}
	return (p);
}
