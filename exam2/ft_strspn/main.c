#include <stdio.h>
#include <string.h>
#include "ft_strspn.c"

int main(int ac, char **av)
{
	if (ac != 1)
	{
		printf("std  : %d \n", (int )strspn(av[1], av[2]));
		printf("init : %d \n", (int )ft_strspn(av[1], av[2]));
	}
	return (0);
}
