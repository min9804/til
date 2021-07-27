#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	unsigned char c;

	while (*str)
	{
		c = *str;
		if (' ' <= c && c <= '~')
			write(1, str, 1);
		else
		{
			write(1, "\\", 1);
			write(1, &"0123456789abcdef"[c / 16], 1);
			write(1, &"0123456789abcdef"[c % 16], 1);
		}
		str++;
	}
}

int main()
{
	char arr[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(arr);
}
