#include <stdlib.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str || *str == ' ')
		write(1, str, 1);
}

void	rev_wstr(char *str)
{
	int 	len;

	while (str[len])
		len++;
	--len;
	while (str[len])
	{
		if (str[len] != ' ')
			--len;		
		else
		{
			ft_putstr(&str[len + 1]);
			--len;
		}
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		rev_wstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}
