#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_numtochar(int n)
{
	if(n >= 10)
	{
		ft_numtochar(n / 10);
		ft_numtochar(n % 10);
	}
	else
	{
		ft_putchar(n + 48);
	}
}

void ft_putnbr(int nb)
{
	if(nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
		ft_numtochar(nb);
	}
	else
	{
		ft_numtochar(nb);
	}
}

int main()
{
	ft_putnbr(-42);
}


