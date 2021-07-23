#include <unistd.h>

void	print_alphabet(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyz", 26);
}

void main()
{
	print_alphabet();
}

