#include <stdio.h>

int add(int a, int b)
{
	int c;
	
	c = a + b;

	return (c);
}

int main()
{
	int t = 5;
	int y = 3;
	int u;

	u = add(t,y);
	printf("%d\n", u);

	return (0);
}


