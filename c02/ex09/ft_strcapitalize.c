/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnasse <abdnasse@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 09:10:48 by abdnasse          #+#    #+#             */
/*   Updated: 2024/07/02 10:23:17 by abdnasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check(char c)
{
	if (!(c == ' ' || c == '+' || c == '-'))
		return (0);
	return (1);
}

int	ft_lower(char c)
{
	if (!(c >= 'a' && c <= 'z'))
		return (0);
	return (1);
}

char	*ft_strlowcase(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	nextup;

	nextup = 1;
	ft_strlowcase(str);
	while (*str)
	{
		if (ft_lower(*str) && nextup)
		{
			*str -= 32;
			nextup = 0;
		}
		if (ft_check(*str) && ft_lower(*(str + 1)))
			nextup = 1;
		str++;
	}
	return (str);
}
