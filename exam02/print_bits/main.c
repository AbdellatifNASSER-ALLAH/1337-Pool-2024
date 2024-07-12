#include <stdio.h>
#include "print_bits.c"
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac != 2)
	{
		int i = 1;
		while(i < ac)
			print_bits(atoi(av[i++]));
	}
	else
		printf("One param !!\n");
	return 0;
}
