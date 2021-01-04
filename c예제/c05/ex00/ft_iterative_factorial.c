int ft_iterative_factorial(int nb)
{
	int i;

	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb)
	{
		i *= nb--;
	}

	return (i);
}	
