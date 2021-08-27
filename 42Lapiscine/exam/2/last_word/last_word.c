#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		is_sep(char c)
{
	if ((9 <= c && c <= 13) || c == ' ')
		return (1);
	return (0);
}

void	last_word(char *str)
{
	int len;

	while (str[len])
		++len;
	len -= 1;
	while (is_sep(str[len]))
		--len;
	while (!is_sep(str[len]) && str[len])
		--len;
	++len;
	while (!is_sep(str[len]) && str[len])
		ft_putchar(str[len++]);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		last_word(argv[1]);
	ft_putchar('\n');
	return (0);
}
