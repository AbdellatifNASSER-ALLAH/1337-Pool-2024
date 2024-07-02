/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnasse <abdnasse@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 09:10:48 by abdnasse          #+#    #+#             */
/*   Updated: 2024/07/02 21:52:45 by abdnasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char *orig;

	orig = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
	return (orig);
}

char	*ft_strcapitalize(char *str)
{
	char *orig;
	int	nextup;

	orig = str;
	nextup = 1;
	ft_strlowcase(str);
	while (*str)
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= '0' && *str <='9'))
		{
			if(nextup && *str >= 'a' && *str <= 'z')
				*str -= 32;
			nextup = 0;
		}
		else
			nextup = 1;

		str++;
	}
	return (orig);
}
