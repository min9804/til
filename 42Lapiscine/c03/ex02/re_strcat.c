#include <stdio.h>
char 	*ft_strcat(char *dest, char *src)
{
	char *temp;

	temp = dest;
	while (*temp)
		temp++;
	while (*src)
	{
		*temp = *src;
		temp++;
		src++;
	}
	*temp = 0;
	return (dest);
}

int main()
{
	char arr1[10] = "asdf";
	char arr2[] = "123";
	ft_strcat(arr1, arr2);
	printf("%s", arr1);
}

