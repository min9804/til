#include <unistd.h>

void	rstr_capitalizer(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i + 1] == ' ' || s[i + 1] == '\t' || s[i + 1] == '\0')
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
	if (argc > 1)
		while (argv[i])
			rstr_capitalizer(argv[i++]);
	else
		write(1, "\n", 1);
	return (0);
}
