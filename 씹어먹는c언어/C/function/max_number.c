#include <stdio.h>

int max_number(int *parr);
int main()
{
	int arr[10];
	int i;

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("입력한 배열중 가장 큰 수: %d", max_number(arr));

	return 0;
}

int max_number(int *parr)
{
	int i;
	int max = parr[0];

	for (i = 0; i < 10; i++)
	{
		if (parr[i] > max)
		{
			max = parr[i];
		}
	}
	return max;
}






