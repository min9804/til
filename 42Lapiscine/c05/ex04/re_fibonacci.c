#include <stdio.h>

int	ft_fibonacci(int index)
{	
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

void	main(void)
{
	printf("%d \n", ft_fibonacci(3));
}

