#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	char	a;

	i = 0;
	while (str[i] != '\0')
	{
		a = str[i];
		if (str[i] >= ' ' && str[i] != 127)
		{
			ft_putchar(a);
		}
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[a / 16]);
			ft_putchar("0123456789abcdef"[a % 16]);
		}
		i++;
	}
}

int main()
{
	char arr[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(arr);

	write(1, "\n", 1);
	
	char c = -100;
	printf("%d \n", (unsigned char)c);
	printf("%d \n", c);
	printf("%u \n", c);
}
