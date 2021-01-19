#include <unistd.h>
int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (*s1 && *s2 && i < n)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
		i++;
	}
	
	if (i == n)
		return (0);

	return (*s1 - *s2);
}
int main()
{
	char s1[] = "123456789";
	char s2[] = "123456789";
     	char c = 'o';

        if (!ft_strncmp(s1, s2, 20))
	{
                write(1, &c, 1);
	}
}

