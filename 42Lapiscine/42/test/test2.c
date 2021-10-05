#include <unistd.h>
#include <stdio.h>

int	check_matriz(int rules[4][4], int matriz[4][4]);


int	is_used_num(int *matriz, int num)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (num == matriz[i])
			return (1);
		++i;
	}
	return (0);
}


int	is_used_num2(int matriz[4][4], int col, int num)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (num == matriz[i][col])
			return (1);
		++i;
	}
	return (0);
}

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

int	fill_board(int rules[3][4][4], int matriz[4][4], int row, int col)
{
	int	value;

	if (row == 4)
		return (check_matriz(rules[0], matriz));
	if (col == 4)
		return (fill_board(rules, matriz, row + 1, 0));
	value = 1;
	while (value < 5)
	{
		if (!is_used_num(matriz[row], value) && !is_used_num2(matriz, col, value))
		{
			matriz[row][col] = value;
			fill_board(rules, matriz, row, col + 1);
			matriz[row][col] = 0;
		}
		++value;
	}
	return (0);
}

void	start(int rules[3][4][4], int matriz[4][4])
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
			rules[1][row][column] = 0;
			rules[2][row][column] = 0;
			column++;
		}
		row++;
	}
}

int	rush(int rules[3][4][4], int matriz[4][4])
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
