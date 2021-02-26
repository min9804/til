#include <unistd.h>
#include <stdio.h>

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
	char s1[] = "01";
	char s2[] = "0";

	printf("%d \n", ft_strncmp(s1, s2, 2));
	
	return (0);
}
