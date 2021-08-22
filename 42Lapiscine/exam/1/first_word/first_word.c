#include <unistd.h>

void	first_world(char *str)
{
	while ((9 <= *str && *str <= 13) || *str == ' ')
		++str;
	while (*str && !((9 <= *str && *str <= 13) || *str == ' '))
	{
		write(1, str++, 1);
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		first_world(argv[1]);
	write(1, "\n", 1);
	return (0);
}
