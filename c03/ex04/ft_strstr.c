/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnasse <abdnasse@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 21:20:34 by abdnasse          #+#    #+#             */
/*   Updated: 2024/07/04 07:09:03 by abdnasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//EX04

char	*ft_strstr(char *str, char *to_find)
{
	char	*s;
	char	*f;

	if (!*to_find)
		return (str);
	while (*str)
	{
		s = str;
		f = to_find;
		while (*s && *f && (*s == *f))
		{
			s++;
			f++;
		}
		if (!*f)
			return (str);
		str++;
	}
	return (0);
}
