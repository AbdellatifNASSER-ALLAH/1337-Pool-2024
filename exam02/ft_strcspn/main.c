#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include "ft_strcspn.c"

int main(int ac, char **av)
{
	if (ac != 1)
	{
		printf("std  : %d \n", (int )strcspn(av[1], av[2]));
		printf("init : %d \n", (int )ft_strcspn(av[1], av[2]));
	}
	return (0);
}
