#include <unistd.h>
void ft_putstr(char *str)
{	
	int len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	
	write(1, str, len);
}

int main()
{
	char str[] = "Hello";	
	ft_putstr(str);
}
