#include <stdio.h>

int	main(void)
{
	int a, b, c, i = 0;

	scanf("%d %d %d", &a, &b, &c);
	if (b >= c)
		printf("-1\n");
	else
		printf("%d\n", a/(c-b) + 1);
	return (0);
}
