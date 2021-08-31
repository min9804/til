#include <unistd.h>

void		hidenp(char *a, char *b)
{
	while (*a && *b)
	{
		if (*a == *b)
		{
			++a;
			++b;
		}
		else
			++b;
	}
	(*a == '\0') ? write(1, "1", 1) : write(1, "0", 1);
}

int		main(int ac, char **av)
{
	if (ac == 3)
		hidenp(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
