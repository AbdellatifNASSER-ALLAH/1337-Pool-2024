#include <unistd.h>

void	print_bits(unsigned char octet)
{
	unsigned char bit;
	int i = 0;	
	while (octet >  0 || i < 8)
	{
		bit = (octet & 128) ? '1' : '0';
		write(1, &bit, 1);
		octet <<= 1;
		i++;
	}
	write(1,  "\n", 1);
}
