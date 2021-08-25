#include <stdio.h>
#include <unistd.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	int i;
	int j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				break ;
			else
				++j;
		}
		if (accept[j] == 0)
			return (i);
		++i;
	}
	return (i);
}

int main() {
  int i;
  char strtext[] = "12a46";
  char cset[] = "12346";

  i = ft_strspn(strtext, cset);
  printf("The length of initial number is %d.\n", i);
  return 0;
}
