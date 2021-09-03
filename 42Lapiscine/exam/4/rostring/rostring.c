#include <stdlib.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str == ' ' || *str == '\t')
		++str;
	while (*str)
	{
		if (*str == ' ' || *str == '\t')
		{
			while (*str == ' ' || *str == '\t')
				++str;
			write(1, " ", 1);
		}
		write(1, str++, 1);
	}
	--str;
	if (*str != ' ' && *str != '\t')
		write(1, " ", 1);
}

void	rostring(char *str)
{
	int 	i;
	int	j;
	int	k;
	
	i = 0;
	while (str[i] == ' ' || str[i] == '\t')
		++i;
	j = i;
	while (str[i] != ' ' && str[i] != '\t')
		++i;
	k = i;
	ft_putstr(&str[i]);
	write(1, &str[j], k - j);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		rostring(argv[1]);
	write(1, "\n", 1);
	return (0);
}
