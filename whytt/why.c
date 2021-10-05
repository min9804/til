#include <stdio.h>
#include <unistd.h>

int	g_count;
int	g_save[576][4][4];
int	g_rules[4][4];

int fill_rules(char *str, int rules[4][4]);
int check_matriz(int rules[4][4], int matriz[4][4]);

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

void	save_matriz(int matriz[4][4])
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{	
			g_save[g_count][i][j] = matriz[i][j];
			++j;
		}
		++i;
	}
	g_count++;
}

int	fill_board(int matriz[4][4], int row, int col)
{
	int	value;

	if (row == 4)
	{
		save_matriz(matriz);
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
int	main(int argc, char **argv)
{
	int	matriz[4][4];

	if (argc != 2 || !fill_rules(argv[1], g_rules))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	fill_board(matriz, 0, 0);
	printf("%d\n", g_count);
	for (int i = 0 ; i < g_count; i++)
	{
		if (check_matriz(g_rules, g_save[i]))
		{
			for (int j = 0; j < 4; j++)
			{
				for (int k = 0; k < 4; k++)
				{
					printf("%d", g_save[i][j][k]);
				}
				printf("\n");
			}
			return (0);
		}
	}
	write(1, "Error\n", 6);
	return (0);
}

