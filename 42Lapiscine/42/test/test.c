#include <stdio.h>
#include <unistd.h>


int	is_used_num(int matriz[4], int num)
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

int	fill_board(int matriz[4][4], int row, int col)
{
	int	value;

	if (row == 4)
	{
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
				printf("%d ", matriz[i][j]);
			printf("\n");
		}
		printf("\n");
		return (0);
	}
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

int	main(void)
{
	int matriz[4][4];

	fill_board(matriz, 0, 0);
	return (0);
}
