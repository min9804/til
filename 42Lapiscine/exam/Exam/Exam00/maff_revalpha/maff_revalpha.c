#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	char c;
	
	 c = 'z';
	while (c >= 'a')
	{
		if (c % 2 != 0)
		{
			ft_putchar(c - 32);
		}
		else
			ft_putchar(c);
		--c;
	}
	ft_putchar('\n');
}
		
