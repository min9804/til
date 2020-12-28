#include <stdio.h>
int max_num_n(int *parr);
int main()
{
	int arr[10];
	int sort_arr[10];
	int i, n;

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	for(i = 0; i < 10; i++)
	{
		n = max_num_n(arr);
		sort_arr[i] = arr[n];
		arr[n] = 0;
		printf("%d, ", sort_arr[i]);
	}
	
	return 0;
}

int max_num_n(int *parr)
{
	int max = parr[0];
	int i;
	int n = 0;

	for (i = 0; i < 10; i++)
	{
		if(parr[i] > max)
		{
			max = parr[i];
			n = i;
		}
	}
	return n;
}





