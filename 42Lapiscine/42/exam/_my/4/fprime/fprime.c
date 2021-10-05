int	ft_is_prime(int n)
{
	long long	i;

	if (n <= 0)
		return (0);
	if (n == 1 || n == 2)
		return (1);
	i = 3;
	while (i * i <= n)
	{
		if (n / i == 0)
		return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	if (ac = 2)
	{
		
