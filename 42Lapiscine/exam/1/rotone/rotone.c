#include <unistd.h>

void	rotone(char c)
{
	char t;
	
	t = c + 1;
	if ('a' <= c && c <= 'y')
		write(1, &t, 1);
	else if (c == 'z')
		write(1, "a", 1);
	else if ('A' <= c && c <= 'Y')
		write(1, &t, 1);
	else if (c == 'Z')
		write(1, "A", 1);
	else
		write(1, &c, 1); 
}	

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		while (*argv[1])
		{
			rotone(*argv[1]);
			++argv[1];
		}
	}
	write(1, "\n", 1);
	return (0);
}
