#include <unistd.h>

void	ft_print_reberse_alphabet(void)
{
	char a = 'z';
	
	while (a >= 'a')
	{
		write(1, &a, 1);
		a--;
	}
}

void main()
{
	ft_print_reberse_alphabet();
}

