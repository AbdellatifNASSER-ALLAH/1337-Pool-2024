/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnasse <abdnasse@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 20:46:12 by abdnasse          #+#    #+#             */
/*   Updated: 2024/07/13 18:53:17 by abdnasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_arrlen(char **arr, int n)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < n)
		len += ft_strlen(arr[i++]);
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*p;
	int		i;
	int		j;
	int		k;
	int		n;

	if (size <= 0 || strs == NULL)
	{
		p = (char *)malloc(sizeof(char));
		if (p)
			p[0] = '\0';
		return (p);
	}
	n = ft_arrlen(strs, size) + ft_strlen(sep) * (size - 1);
	p = (char *)malloc((n + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			p[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size - 1)
			p[k++] = sep[j++];
		i++;
	}
	p[k] = '\0';
	return (p);
}
