void	ft_ultimate_div_mod(int *a, int *b)
{
	int t;

	t = *a / *b;
	*b = *a % *b;
	*a = t;
}

