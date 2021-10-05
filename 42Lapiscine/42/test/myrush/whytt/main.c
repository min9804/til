#include <unistd.h>
#include <stdio.h>

int	g_count;
int	g_save[576][4][4];

int	fill_board(int matriz[4][4], int row, int col);
int	fill_rules(int rules[4][4], char *str);
int	check_matriz(int rules[4][4], int matrix[4][4]);

int	main(int argc, char **argv)
{
	int matriz[4][4];
	int rules[4][4];

	fill_board(matriz, 0, 0);
	if (argc != 2 || !fill_rules(rules, argv[1]))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	printf("%d\n", g_count);
	for (int i = 0 ; i < g_count; i++)
	{
		if (check_matriz(rules, g_save[i]))
		{
			printf("b");
			for (int j = 0; j < 4; j++)
			{
				for (int k = 0; k < 4; k++)
				{
					printf("%d", g_save[i][j][k]);
				}
				printf("\n");
			}
			printf("\n");
		}
	}
	
	int tab2[4][4] = {{4, 3, 2, 1}, {1, 2, 2, 2}, {4, 3, 2, 1}, {1, 2, 2, 2}};
	int tab[4][4] = {{1, 2, 3, 4}, {2, 3, 4, 1}, {3, 4, 1, 2}, {4, 1, 2, 3}};

	printf("%d\n", check_matriz(tab2, tab));

	return (0);
}
