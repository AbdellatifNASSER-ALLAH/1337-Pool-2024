/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnasse <abdnasse@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 07:10:19 by abdnasse          #+#    #+#             */
/*   Updated: 2024/07/04 10:26:40 by abdnasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// EX05

unsigned int	ft_strlen(char *str)
{
	unsigned int	n;

	n = 0;
	while (*str++)
		n++;
	return (n);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size <= dest_len)
		return (size + src_len);
	i = dest_len;
	while (i < size - 1 && *src)
		dest[i++] = *src++;
	dest[i] = '\0';
	return (dest_len + src_len);
}
