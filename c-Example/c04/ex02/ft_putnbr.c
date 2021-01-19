#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
char print_nb(long long nb)
{	
	int i;
	char temp[10];
	
	i = 0;
	while (nb)
	{
		temp[i] = nb % 10 + '0';
		nb = nb /10;
		i++;
	}
	i -= 1;
	while (i + 1)
	{
		ft_putchar(temp[i]);
		i--;
	}
}

void ft_putnbr(int nb)
{
	long long t = (long long)nb;
	
	if (t < 0)
	{
		t *= -1;
		ft_putchar('-');
		print_nb(t);
	}
	else
		print_nb(t);
}
int main()
{
	int a = -2147483648;
	ft_putnbr(a);
	return 0;
}

