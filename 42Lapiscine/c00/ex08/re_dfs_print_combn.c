#include <unistd.h>
#include <stdio.h>

void	ft_dfs(char *nbr, int depth, int n)
{
	int i;

	if (depth == n)
	{
		if (nbr[0] == 10 - n + '0')
			write(1, nbr, n);
		else
			write(1, nbr, n + 2);
		return ;
	}
	i = 0;
	while (i <= 9)
	{
		if (depth == 0 || nbr[depth - 1] < i + '0')
		{
			nbr[depth] = i + '0';
			ft_dfs(nbr, depth + 1, n);
		}
		i++;
	}
}

void 	ft_print_combn(int n)
{
	char nbr[n + 2];

	nbr[n] = ',';
	nbr[n + 1] = ' ';

	ft_dfs(nbr, 0, n);
}

void	main(void)
{
	int n;
	printf("1~9 숫자중 하나를 입력하시오 : ");
	scanf("%d", &n);
	ft_print_combn(n);
}
