#include <stdio.h>

unsigned int	lcm(unsigned int a, unsigned int b)
{
	int hcf;
	
	if (!a || !b)
		return (0);
	hcf = 2;
	while (hcf < a * b)
	{
		if (!(a % hcf) && !(b % hcf))
			break;
		++hcf;
	}
	if (hcf == a * b)
		hcf = 1;
	return (a * b / hcf);
} 

int		main(void)
{
	printf("%d\n", lcm(0, 2));
	return (0);
}
