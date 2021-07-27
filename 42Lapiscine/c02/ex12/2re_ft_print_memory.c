#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_addr(long long addr, int count, char *hex)
{
	if (!addr)
	{
		while (count++ < 16)
			ft_putchar('0');
		return ;
	}
	print_addr(addr >> 4, count + 1, hex);
	ft_putchar(hex[addr % 16]);
}

void	print_char_to_hex(unsigned char *ptr, unsigned len, char *hex, char *str)
{
	int i;

	i = 0;
	while (i < len)
	{
		if (i % 2 == 0)
			ft_putchar(' ');
		if (' ' <= ptr[i] && ptr[i] <= '~')
			str[i] = ptr[i];
		else
			str[i] = '.';
		ft_putchar(hex[(int)ptr[i] / 16]);
		ft_putchar(hex[(int)ptr[i] % 16]);
		i++;
	}
	while (i < 16)
	{
		if (i % 2 == 0)
			ft_putchar(' ');
		write(1, "  ", 2);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char *hex;
	char str[16];
	unsigned int i;
	unsigned int len;
	unsigned char *ptr;
	
	hex = "0123456789abcdef";

	i = 0;
	while (size)
	{
		len = size / 16 ? 16 : size;
		ptr = (unsigned char*)addr + i;

		print_addr((long long)ptr, 0, hex);
		ft_putchar(':');
		print_char_to_hex(ptr, len, hex, str);
		ft_putchar(' ');
		write(1, str, len);
		ft_putchar('\n');
		size -=len;
		i += 16;
	}
	return (addr);
}

int main()
{
	char arr[] =  "Bonjour les amin askdlfa\nlksdjfalkfj";
	ft_print_memory(arr, 32);
}


