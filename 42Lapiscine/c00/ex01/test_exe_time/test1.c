#include <stdio.h>
#include <time.h>
#include <unistd.h>

void ft_print_alphabet(void)
{
	char alpha;
	alpha = 'a';
	while (alpha <= 'z')
	{
		write(1, &alpha, 1);
		alpha++;
	}
}

int main()
{
	clock_t	start = clock();
	ft_print_alphabet();
	clock_t end = clock();
	printf("Time: %lf\n", (double)(end - start)/CLOCKS_PER_SEC);
	return (0);
}
