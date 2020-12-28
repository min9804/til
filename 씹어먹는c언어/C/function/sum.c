#include <stdio.h>
int sum(int n)
{
	int i;
	int sum = 0;
	for (i = 0; i <= n; i++)
	{
		sum += i;
	}

	return sum;
}

int main()
{
	printf("%d", sum(10));

}
