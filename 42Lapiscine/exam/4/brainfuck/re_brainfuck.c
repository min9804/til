#include <unistd.h>
#include <stdlib.h>

char	*par(char *src, int way)
{
	int term;

	term = 0;
	while (1)
	{
		if (*src == '[')
			++term;
		else if (*src == ']')
			--term;
		if (term == 0)
			return (src);
		src += way;
	}
	return (NULL);
}

void	brainfuck(char *src, char *buf)
{
	while (*src)
	{
		if (*src == '>')
			++buf;
		else if (*src == '<')
			--buf;
		else if (*src == '+')
			(*buf)++;
		else if (*src == '-')
			(*buf)--;
		else if (*src == '.')
			write(1, buf, 1);
		else if (*src == '[' && !(*buf))
			src = par(src, 1);
		else if (*src == ']' && (*buf))
			src = par(src, -1);
		++src;
	}
}

int		main(int argc, char **argv)
{
	char buf[2048];
	int i;

	if (argc == 2)
	{
		i = 0;
		while (i < 2048)
			buf[i++] = '\0';
		brainfuck(argv[1], buf);
	}
	else
		write(1, "\n", 1);
	return (0);
}
