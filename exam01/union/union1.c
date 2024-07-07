/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnasse <abdnasse@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 12:21:40 by abdnasse          #+#    #+#             */
/*   Updated: 2024/07/05 12:51:29 by abdnasse         ###   ########.fr       */
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
	while (i < 128)
	{
		if (arr[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int main(int ac, char *av[])
{
	if (ac == 3)
	{
	int i,j;
	char *s1;
	char *s2;
	char founded_chars[128];

	s1 = av[1];
	s2 = av[2];
	i = 0, j = 0;
	while ( j < 128)
	 		founded_chars[j++] = 0;
	j = 0;
	while (s1[i])
	{
		if (!exist(founded_chars, s1[i]))
				founded_chars[j++] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		if (!exist(founded_chars, s2[i]))
				founded_chars[j++] = s2[i];
		i++;
	}
	j = 0;
	while (founded_chars[j])
		put_char(founded_chars[j++]);
	}
	put_char('\n');
	return 0;	

}
