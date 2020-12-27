#include <unistd.h>
void ft_is_negative(int n)
{
	char is_negative;
	if (n < 0)
	{
		is_negative = 'N';
		write(1, &is_negative, 1);
	}
	else
	{
		is_negative = 'P';
		write(1, &is_negative, 1);
	}
}

int main()
{
	ft_is_negative(-123);
}

