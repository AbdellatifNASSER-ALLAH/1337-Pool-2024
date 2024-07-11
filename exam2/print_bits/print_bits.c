#include <unistd.h>

void	print_bits(unsigned char octet)
{
	unsigned char bit;
	
	octet -= '0';
	while (octet > 0)
	{
		bit = (octet & 128) ? '1' : '0';
		write(1, &bit, 1);
		octet <<= 1;
	}
}
