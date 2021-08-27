#include <stdio.h>
#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int a;
	int b;

	a = octet;
	b = 128;
	while (b > 0)
	{
		if (a >= b)
		{
			write(1, "1", 1);
			a -= b;
		}
		else
			write(1, "0", 1);
		b /= 2;
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
