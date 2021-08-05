#include <stdlib.h>
#include <stdio.h>

int 	*ft_range(int min, int max)
{
	int *ret;
	int i;

	if (min >= max)
		return (NULL);
	ret = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	while(min < max)
		ret[i++] = min++;
	return (ret);
}

void main()
{
	int *arr = ft_range(1, 10);
	int i = 0;
	while (arr[i])
		printf("%d ", arr[i++]);
}

