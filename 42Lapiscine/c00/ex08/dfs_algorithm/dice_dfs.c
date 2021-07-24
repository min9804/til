/*10이하의 자연수 N을 입력받아 주사위를 N번 던져서 나올 수 있는 모든
경우를 출력하는 프로그램을 작성하시오*/

#include <stdio.h>

int N, arr[11];

void dfs(int depth)
{
	int i;
	if(depth > N )
	{
		for(i = 1; i<= N; i++)
		{
			printf("%d ", arr[i]);
		}
		printf("\n");
		return;
	}
	for(i = 1; i <=6; i++)
	{
		arr[depth] = i;
		dfs(depth + 1);
	}
}

void main()
{
	printf("주사위를 던질 횟수를 입력 하시오 (1~10) : ");
	scanf("%d", &N);
	dfs(1);
}
