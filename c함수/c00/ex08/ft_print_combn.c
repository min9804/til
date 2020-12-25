#include <unistd.h>
void ft_putchar(c)
{
	write(1, &c, 1);
}

void ft_print_combn(int n)
{
	char num[10];

