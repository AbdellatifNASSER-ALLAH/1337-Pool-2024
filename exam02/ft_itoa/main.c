#include <stdio.h>
#include "ft_itoa.c"
#include "/Users/abdnasse/1337_Pool/c04/ex03/ft_atoi.c"
#include <stdlib.h>
int main(int ac, char **av)
{
	if (ac != 1)
	{
		int i = 1;
		while (i < ac)
		{
			int nbr = ft_atoi(av[i]);
			printf("%d\n", nbr);
			char *p = ft_itoa(nbr);
			printf("itoa : %s\n", p);
			free(p);
			i++;
		}
	}
	return 0;
}

