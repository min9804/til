#include <unistd.h>

int		main(void)
{
	char c;
	char u;

	c = 'z';
	while (c >= 'a')
	{
		if (c % 2 == 0)
			write (1, &c, 1);
		else
		{
			u = c + 'A' - 'a';
			write(1, &u, 1);
		}
		--c;
	}
	write(1, "\n", 1);
	return (0);
}
