#include <stdio.h>
#include <time.h>
#include <unistd.h>

void	ft_print_alphabet(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyz", 26);
}

int main()
{
	clock_t start = clock();
	ft_print_alphabet();
	clock_t end = clock();
	printf("Time: %lf\n", (double)(end - start)/CLOCKS_PER_SEC);
	return (0);
}
