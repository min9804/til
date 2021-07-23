#include <unistd.h>

void 	putchar(char c)
{
	write(1, &c, 1);
}

void 	print_num(int n)
{
	if (n == 0)
		return 0;

	print_num(n / 10);
	putchar(48 + n % 10);

