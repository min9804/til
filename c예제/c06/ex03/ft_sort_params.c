#include <unistd.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
	while(*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void ft_sort(int argc, char *argv[])
{
	int i;
	int j;
	char *temp;

	i = 1;
	while (i++ < argc)
	{
		j = 1;
		while (++j < argc)
		{
			if (ft_strcmp(argv[j - 1], argv[j]) < 0)
			{
				temp = argv[j - 1];
				argv[j - 1] = argv[j];
				argv[j] = temp;
			}
		}
	}
}

int main(int argc, char **argv)
{
	ft_sort(argc, argv);
	
	int i;
	int j;

	i = argc;
	while (--i > 0)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{ 
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
	}
}
