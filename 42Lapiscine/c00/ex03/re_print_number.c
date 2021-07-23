#include <unistd.h>

void 	ft_print_number(void)
{
	char num = '0';
	
	while(num <= '9')
	{
		write(1, &num, 1);
		num++;
	}
}

void	main(void)
{
	ft_print_number();
}

