#include <stdio.h>

int	check_matriz(int rules[4][4], int matriz[4][4]);

int	is_used_num(int *matriz, int num)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (matriz[i] == num)
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
		if (matriz[i][col] == num)
			return (1);
		++i;
	}
	return (0);
}

int	fill_board(int rules[4][4]int matriz[4][4], int row, int col)
{
	int	value;

	if (row == 4)
		return (check_matriz(rules[0], matriz));
	if (col == 4)
		return (fill_board(matriz, row + 1, 0));
	value = 1;
	while (value < 5)
	{
		if (!is_used_num(matriz[row], value) && !is_used_num2(matriz, col, value))
		{
			matriz[row][col] = value;
			fill_board(matriz, row, col + 1);
			matriz[row][col] = 0;
		}
		++value;
	}
	return (0);

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
