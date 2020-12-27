#include <stdio.h>
void arr(int n)
{
	char num[n];
	int i;
	for (i = 0; i < n; i++)
	{
		num[i] = i + '1';
		printf("%c", num[i]);
	}
}
int main()
{
	arr(9);
}
