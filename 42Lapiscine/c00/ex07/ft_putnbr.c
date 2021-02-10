#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_numtochar(unsigned int n)
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
	unsigned int unb;
	
	if(nb < 0)
	{
		unb = -1 * nb;
		ft_putchar('-');
		ft_numtochar(unb);
	}
	else
	{
		ft_numtochar(unb);
	}
}

int main()
{
	int a = -2147483648;
	ft_putnbr(a);
}


