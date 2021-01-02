#include <unistd.h>
void ft_putstr(char *src)
{
	while (*src)
	{
		write(1, src, 1);
		src++;
	}
}
int main()
{
	char arr[] = "hello";
	ft_putstr(arr);
}
