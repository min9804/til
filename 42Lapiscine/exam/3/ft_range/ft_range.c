#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int start, int end)
{
	int i;
	int t;
	int *ret;

	i = 0;
	t = end - start;
	t = t > 0 ? t : t * -1;
	ret = (int *)malloc(sizeof(int) * (t + 1));
	if (start <= end)
		while (start <= end)
			ret[i++] = start++;
	else
		while (start >= end)
			ret[i++] = start--;
	return (ret);
}

void do_test(int start, int end)
{
	int *p = ft_range(start, end);
	int t = end - start > 0 ? end - start : (end - start) * -1;
	printf("ft_range(%d, %d):", start, end);
	for  (int i = 0; i < t + 1; i++)
		printf("%d ", p[i]);
	printf("\n");
}

int		main(void)
{
	do_test(1, 3);
	do_test(-1, 2);
	do_test(0, 0);
	do_test(1, 1);
	do_test(0, -3);
	do_test(1, -3);
	do_test(-17, -3);
	return (0);
}
