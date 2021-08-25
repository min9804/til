#include <stdio.h>
#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	while (*s1)
	{
		while (*s2)
		{
			if (*s1 == *s2)
				return ((char*)s1);
			++s2;
		}
		++s1;
	}
	return (NULL);
}

int main() {
  char str[] = "This is a sample string";
  char key[] = "aeiou";
  char* pch;
  printf("Vowels in '%s': ", str);
  pch = strpbrk(str, key);

  while (pch != NULL) {
    printf("%c ", *pch);
    pch = strpbrk(pch + 1, key);
  }
  printf("\n");

  return 0;
}
