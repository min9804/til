#include <unistd.h>

void	ft_wdmatch(char *a, char *b)
{
	char *tmp;

	tmp = a;
	while (*a && *b)
	{
		if (*a == *b)
		{
			++a;
			++b;
			if (*a == '\0')
			{
				while (*tmp)
					write(1, tmp++, 1);
				return ;
			}
		}
		else
			++b;
	}
}
	

int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_wdmatch(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
