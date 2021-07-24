#include <unistd.h>

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}

void 	ft_numtochar(unsigned int n)
{
	if(n >= 10)
	{
		ft_numtochar(n / 10);
		ft_numtochar(n % 10);
	}
	else
		ft_putchar(n + 48);
}


void	ft_putnbr(int nb)
{
	unsigned int unb;

	if(nb < 0)
	{
		unb = -1 * nb;
		ft_putchar('-');
		ft_numtochar(unb);
	}
	else
		ft_numtochar(nb);
}

void	main(void)
{
	int a = -2147483648;
	int b = 2147483647;
	int c = 42;
	ft_putnbr(a);
	ft_putchar('\n');
	ft_putnbr(b);
	ft_putchar('\n');
	ft_putnbr(c);
	ft_putchar('\n');
}
