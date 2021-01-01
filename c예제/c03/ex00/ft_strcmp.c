#include <unistd.h>
int ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int main()
{
	char s1[] = "123";
	char s2[] = "123";
	char s3[] = "1234";
	char s4[] = "asd";

	char c = 'o';

	if (!ft_strcmp(s1, s3))
	{
		write(1, &c, 1);
	}
}

