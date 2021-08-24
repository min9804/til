#include <unistd.h>

int		is_char(char *str)
{
	int i;

	i = 0;
	while (str[i])
		++i;
	if (i == 1)
		return (1);
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 4 && is_char(argv[2]) && is_char(argv[3]))
	{
		while (*argv[1])
		{
			if (*argv[1] == *argv[2])
				*argv[1] = *argv[3];
			write(1, argv[1], 1);
			++argv[1];
		}
	}
	write(1, "\n", 1);
	return (0);
}
