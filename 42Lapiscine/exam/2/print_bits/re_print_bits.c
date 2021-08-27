#include <unistd.h>
#include <stdio.h>

void	print_bits(unsigned char octet)
{
	int max;
	char c;

	max = 128;
	while (max)
	{
		c = octet / max + '0';
		write(1, &c, 1);
		octet %= max;
		max /= 2;
	}
}

int		main()
{
	print_bits(128);
	write(1, "\n", 1);
	print_bits(16);
	write(1, "\n", 1);
	print_bits(255);
	write(1, "\n", 1);
	print_bits(1);
	write(1, "\n", 1);
	print_bits(99);
	write(1, "\n", 1);
	return (0);
}
 
