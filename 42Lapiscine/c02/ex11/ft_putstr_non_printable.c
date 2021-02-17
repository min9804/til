#include <unistd.h>
int is_printable(unsigned char c)
{
	if (' ' <= c && c <= '~')
		return (1);
	return (0);
}
void write_hex(unsigned char c)
{
	c += '0';
	if (c > '9')
		c += 39;
	write(1, &c, 1);
}
void print_hex(unsigned char c)
{
	write(1, "\\", 1);
	write_hex((int)c / 16);
	write_hex((int)c % 16);
}

void ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (!is_printable(*str))
			print_hex(*str);
		else
			write(1, str, 1);
		++str;
	}
}
int main()
{
	char arr[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(arr);
}
