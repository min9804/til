#include "ft_do_op.h"

void	ft_add(int a, int b)
{
	long long num;

	num = a + b;
	if (a + b < 0)
	{
		num *= -1;
		write(1, "-", 1);
	}
	ft_print_num(num);
}

void	ft_sub(int a, int b)
{
	long long num;

	num = a - b;
	if (a - b < 0)
	{
		num *= -1;
		write(1, "-", 1);
	}
	ft_print_num(num);
}

void	ft_multi(int a, int b)
{
	long long num;

	num = a * b;
	if (a * b < 0)
	{
		num *= -1;
		write(1, "-", 1);
	}
	ft_print_num(num);
}

void	ft_div(int a, int b)
{
	long long num;

	if (b == 0)
	{
		write(1, "Stop : division by zero", 23);
		return ;
	}
	num = a / b;
	if (a / b < 0)
	{
		num *= -1;
		write(1, "-", 1);
	}
	ft_print_num(num);
}

void	ft_mod(int a, int b)
{
	long long num;

	if (b == 0)
	{
		write(1, "Stop : modulo by zero", 21);
		return ;
	}
	num = a % b;
	if (a % b < 0)
	{
		num *= -1;
		write(1, "-", 1);
	}
	ft_print_num(num);
}
