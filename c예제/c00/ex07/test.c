#include <unistd.h>
int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	numtochar(int n)
{
	if(n >= 10)
	{
		numtochar(n / 10);
		numtochar(n % 10);
	}
	else
	{
		ft_putchar(n + 48);
	}
}
void	ft_putnbr(int nb)
{
	if(nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
		numtochar(nb);
	}
	else
	{
		numtochar(nb);
	}
}
int main()
{
	ft_putnbr(-23435);
}
