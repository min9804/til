#include <unistd.h>

int	check_matriz(int rules[4][4], int matriz[4][4]);

void	write_matriz(int matriz[4][4])
{
	int		row;
	int		column;
	char	c;

	row = 0;
	while (row < 4)
	{
		column = 0;
		while (column < 4)
		{
			c = '0' + matriz[row][column];
			write(1, &c, 1);
			write(1, " ", 1);
			column++;
		}
		row++;
		write(1, "\n", 1);
	}
}

int	*fill_board(int matriz[16], int depth)
{
	int	i;

	if (depth == 16)
	{
		write(1, matriz, 16);
		return (matriz);
	}
	i = 1;
	while (i <= 4)
	{
		if (depth <= 16)
		{
			matriz[depth] = i;
			fill_board(matriz, depth + 1);
		}
		++i;
	}
}

void	start(int rules[4][4], int matriz[4][4])
{
	int	row;
	int	column;

	row = 0;
	while (row < 4)
	{
		column = 0;
		while (column < 4)
		{
			matriz[row][column] = 0;
			rules[row][column] = 0;
			column++;
		}
		row++;
	}
}

int	rush(int rules[4][4], int matriz[4][4])
{
	start(rules, matriz);
	if (fill_board(rules, matriz, 0, 0))
	{
		write_matriz(matriz);
		return (1);
	}
	else
		return (0);
}
