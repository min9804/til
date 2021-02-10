#include <unistd.h>

void	ft_ptustr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int main()
{
	ft_ptustr("hello world");
}

