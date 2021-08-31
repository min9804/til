#include <stdio.h>
#include <stdlib.h>

int		*ft_rrange(int start, int end)
{
	int range;
	int *ret;
	int i;
	
	range = end - start > 0 ? end - start : -(end - start);
	ret = (int *)malloc(sizeof(int) * (range + 1));
	i = 0;
	if (start < end)
		while (end >= start)
			ret[i++] = end--;
	else
		while (end <= start)
			ret[i++] = end++;
	return (ret);
}

void do_test(int start, int end)
{
	int *p = ft_rrange(start, end);
	int t = end - start > 0 ? end - start : (end - start) * -1;
	printf("ft_rrange(%d, %d):", start, end);
	for  (int i = 0; i < t + 1; i++)
		printf("%d ", p[i]);
	printf("\n");
}

int		main(void)
{
	do_test(1, 3);
	do_test(-1, 2);
	do_test(0, 0);
	do_test(0, -3);
	return (0);
}
