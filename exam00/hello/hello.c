/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnasse <abdnasse@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 11:47:18 by abdnasse          #+#    #+#             */
/*   Updated: 2024/06/27 11:47:20 by abdnasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int	main(void)
{
	char	c[] = "Hello World!\n";
	int i;

    i = 0;
	while (c[i] != '\0')
 		i++;
    
	write(1, &c, i);
	return (0);
}