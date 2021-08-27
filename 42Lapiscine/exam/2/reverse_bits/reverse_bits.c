#include <stdio.h>
#include <unistd.h>
	
unsigned char	reverse_bits(unsigned char octet)
{
	int i;
	unsigned char ret;
	
	i = 0;
	while (i < 8)
	{
		ret <<= 1;
		ret += octet & 1;
		octet >>= 1;
		++i;
	}
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
	print_bits(97);
	write(1, "\n", 1);
	print_bits(reverse_bits(97));
	write(1, "\n", 1);
	printf("%d\n", reverse_bits(97));
	print_bits(134);
	write(1, "\n", 1);
	return (0);
}
