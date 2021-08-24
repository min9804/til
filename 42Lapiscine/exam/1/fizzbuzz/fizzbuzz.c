#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnum(int n)
{
	if (n < 10)
	{
		ft_putchar(n + '0');
		return ;
	}
	ft_putnum(n / 10);
	ft_putnum(n % 10);
}

int		main(void)
{
	int i;

	i = 0;
	while (++i <= 100)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			if (i % 3 == 0)
				write(1, "fizz", 4);
			if (i % 5 == 0)
				write(1, "buzz", 4);
		}
		else
			ft_putnum(i);
		ft_putchar('\n');
	}
	return(0);
}
