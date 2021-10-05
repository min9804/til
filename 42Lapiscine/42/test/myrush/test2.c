#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

//int	check_matriz(int rules[4][4], int matriz[4][4]);

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

/*void	write_matriz(int matriz[4][4])
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
*/

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
			printf("c%d\n", col);
			printf("r%d\n", row);
		}
		++value;
	}
	return (0);
}

/*int	fill_rules(char *argv, int rules[4][4])
{
	int	i;
	int	j; 

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (*argv < '1' || '4' < *argv)
				return (0);
			rules[i][j] = *argv - '0';
			argv += 2;
			++j;
		}
		++i;
	}
	return (1);
}
*/
int	main(int argc, char **argv)
{
	int	matriz[4][4];

	fill_board(matriz, 0, 0);

	return (0);
}
