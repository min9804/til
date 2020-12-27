#include <unistd.h>
void ft_putchar(char a)
{
	write(1, &a, 1);
}
void print_num(int a, int b)
{
	ft_putchar(48 + a / 10);
	ft_putchar(48 + a % 10);
	ft_putchar(' ');
	ft_putchar(48 + b / 10);
	ft_putchar(48 + b % 10);
	if (a + b != 98 + 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}
void ft_print_comb2(void)
{
	int a, b;
	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			print_num(a, b);
			b ++;
		}
		a++;
	}

}
int main()
{
	ft_print_comb2();
}
