#include <unistd.h>
#include <stdio.h>

int g_board[10];
int g_count;

void	print_board(int *g_board)
{
	int i;
	char c;
	
	i = 0;
	while (i < 10)
	{
		c = g_board[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	is_vaild_position(int q)
{
	int i;

	i = 0;
	while (i < q)
	{
		if (g_board[i] == g_board[q])
			return (0);
		if (g_board[i] > g_board[q])
		{
			if (q - i == g_board[i] - g_board[q])
				return (0);
		}
		else
		{
			if (q - i == g_board[q] - g_board[i])
				return (0);
		}
		i++;
	}
	return (1);
}

void	push_queens_in_board(int q)
{
	int i;
	
	i= 0;
	if (q < 10)
	{
		while (i < 10)
		{
			g_board[q] = i;
			if (is_vaild_position(q))
				push_queens_in_board(q + 1);
			i++;
		}
	}
	else
	{
		g_count++;
		print_board(g_board);
	}
}

int	ft_ten_queens_puzle(void)
{
	g_count = 0;
	push_queens_in_board(0);
	return (g_count);
}
		
void	main(void)
{
	printf("%d \n", ft_ten_queens_puzle());
}

