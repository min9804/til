#include <unistd.h>

int num_len;
char num[10];

void make_num(int prev, int n)
{
	int i;
	if (n == num_len)
	{
		write(1, num, num_len);
		write(1, ", ", 2);
		return ;
	}
	if (prev == 9)
		return ;
	i = prev;
	while (++i <= 10 - num_len + n)
	{
		num[n] = '0' + i;
		make_num(i, n + 1);
	}
}

void print_last(int i)
{
	char c;

	while (i <= 9)
	{
		c = '0' + i++;
		write(1, &c, 1);
	}
}

void ft_print_combn(int n)
{
	int i;
	
	i = 0;
	num_len = n;
	while (i < 10 - n)
	{
		num[0] = '0' + i;
		make_num(i++, 1);
	}
	print_last(i);
}

int main()
{
	ft_print_combn(3);
}
