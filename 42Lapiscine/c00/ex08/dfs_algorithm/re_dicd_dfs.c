#include <unistd.h>
#include <stdio.h>

void	dfs_dice(char *arr, int depth, int n)
{
	int i;

	if (depth == n)
	{
		write(1, arr, n);
		write(1, "\n", 1);
		return ;
	}
	i = 1;
	while(i <= 6)
	{
		arr[depth] = i + '0';
		dfs_dice(arr, depth + 1, n);
		i++;
	}
}

void	main(void)
{
	int n;

	printf("주사위를 던질 횟수를 입력하시오 (1~10) : ");
	scanf("%d", &n);

	char arr[n];

	dfs_dice(arr, 0, n);
}


