#include <unistd.h>

void	dfs(char *arr, int depth, int n)
{
	int i;

	if (depth == n)
	{
		if (arr[0] == 10 - n + '0')
			write(1, arr, n);
		else 
			write(1, arr, n + 2);

		return ;
	}
	i = 0;
	while (i <= 9)
	{
		if (depth == 0 || arr[depth - 1] < i + '0')
		{
			arr[depth] = i + '0';
			dfs(arr, depth + 1, n);
		}
		i++;
	}
}

void	ft_print_combn(int n)
{
	char arr[n + 2];

	arr[n] = ',';
	arr[n + 1] = ' ';

	dfs(arr, 0, n);
}

int	main(void)
{
	ft_print_combn(2);
	return (0);
}

