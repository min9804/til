#include <unistd.h>

void	print_letter(char a)
{
	write(1, &a, 1);
}

void	ft_write(int a, int b)
{
	print_letter(48 + a / 10);
	print_letter(48 + a % 10);
	print_letter(' ');
	print_letter(48 + b / 10);
	print_letter(48 + b % 10);
	if (a + b != 98 + 99)
	{
		print_letter(',');
		print_letter(' ');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_write(a, b);
			b++;
		}
		a++;
	}
}

int main()
{
	ft_print_comb2();
}
