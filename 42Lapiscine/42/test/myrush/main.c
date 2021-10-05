#include <unistd.h>
#include <stdio.h>

int	fill_board(int matriz[4][4], int row, int col);

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
	int	rules[4][4];
	int	matriz[4][4];

	if (argc == 2 /*&& fill_rules(argv[1], rules)*/)
	{
		printf("10\n");
		fill_board(matriz, 0, 0);
		printf("90\n");
		return (0);
	}
	write(1, "Error\n", 6);
	return (1);
}
