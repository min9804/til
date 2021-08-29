#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnum(int n)
{
	if (n > 9)
		ft_putnum(n / 10);
	ft_putchar(n % 10 + '0');
}

int		ft_atoi(char *s)
{
	int r;

	r = 0;
	while ('0' <= *s && *s <= '9')
	{	
		r = r * 10 + (*s - '0');
		++s;
	}
	return (r);
}

int		is_prime(int n)
{
	int i;
	
	i = 2;
	while (i < n)
		if (!(n % i++))
			return (0);
	return (1);
}

void	ft_add_prime_sum(int n)
{
	int i;
	int sum;

	i = 1;
	sum = 0;
	while (++i <= n)
		if (is_prime(i))
			sum += i;
	ft_putnum(sum);
}
		
int 		main(int argc, char **argv)
{
	if ((argc == 2) && ft_atoi(argv[1]) > 0)
		ft_add_prime_sum(ft_atoi(argv[1]));
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
