#include <unistd.h>

void	str_capitalizer(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (i == 0 || s[i - 1] == ' ' || s[i - 1] == '\t')
		{
			if ('a' <= s[i] && s[i] <= 'z')
				s[i] -= 32;
		}
		else
			if ('A' <= s[i] && s[i] <= 'Z')
				s[i] += 32;
		++i;
 	}
	write(1, s, i);
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc == 1)
		write(1, "\n", 1);
	while (argv[i])
		str_capitalizer(argv[i++]);
	return (0);
}
