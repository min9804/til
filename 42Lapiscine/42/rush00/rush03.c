void	ft_putchar(char c);

void	print_char(char *data, int garo)
{
	int	i;

	i = 0;
	while (i < garo)
	{
		if (i == 0)
			ft_putchar(data[0]);
		else if (i == garo - 1)
			ft_putchar(data[1]);
		else
			ft_putchar(data[2]);
		++i;
	}
	ft_putchar('\n');
}

void	print_garo(char *data, int garo, int sero)
{
	int	i;

	i = 0;
	while (i < sero)
	{
		if(i == 0 || i == sero - 1)
			print_char(data, garo);
		else
			print_char(&data[3], garo);
		++i;
	}
}

void	rush(int x, int y)
{
	print_garo("ACBBB ", x, y);
}
