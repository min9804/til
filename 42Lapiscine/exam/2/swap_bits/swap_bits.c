#include <stdio.h>
#include <unistd.h>

unsigned char	swap_bits(unsigned char octet)
{
	unsigned char ret;

	ret += octet;
	ret <<= 4;
	ret += octet >> 4;

	return (ret);
} 

void	print_bits(unsigned char octet)
{
	int max;
	char c;

	max = 128;
	while (max)
	{
		c = '0' + (octet / max);
		write(1, &c, 1);
	   	octet %= max;
		max /= 2;
	}
}

int		main()
{
	print_bits(65);
	write(1, "\n", 1);
	print_bits(swap_bits(65));
	write(1, "\n", 1);
	printf("%d\n", swap_bits(65));
	print_bits(134);
	write(1, "\n", 1);
	return (0);
}
