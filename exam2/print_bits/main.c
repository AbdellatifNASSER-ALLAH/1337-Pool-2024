#include <stdio.h>
#include "print_bits.c"

int main(int ac, char **av)
{
	if (ac == 2)
	{
		print_bits(av[1][0]);
		printf("\n :-)\n");
	}
	else
		printf("One param !!\n");
	return 0;
}
