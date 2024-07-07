/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnasse <abdnasse@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 10:41:03 by abdnasse          #+#    #+#             */
/*   Updated: 2024/07/05 14:07:23 by abdnasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

int	exist(char arr[], char c)
{
	int i = 0;
	while ( i < 127)
	{
		if (arr[i] == c)
			return 1;
		i++;
	}
	return 0;
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		int i , j, k;
		char *s1, *s2;
		char f_chars[127];
        int founded;

		s1 = av[1];
		s2 = av[2];
		i = 0, k = 0;

		while (s1[i])
		{
			j = 0;
			founded = 0;
			while (s2[j])
			{
				if (s1[i] == s2[j])
				{
					founded = 1;
					break;
				}
				j++;
			}
			if (founded && !exist(f_chars, s1[i]))
			{
				f_chars[k++] = s1[i];
			}
			i++;
		}
		f_chars[k] = 0;
		k = 0;
		while (f_chars[k])
			put_char(f_chars[k++]);
	}
	put_char('\n');
	return 0;
}
