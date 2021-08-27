int		is_power_of_2(unsigned int n)
{
	int x;

	x = 2;
	while (x <= n)
	{
		if (n == x)
			return (1);
		x *= 2;
	}
	return (0);
}
