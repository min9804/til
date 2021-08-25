#include "do_op.h"

void	do_op(int a, int b, char op)
{
	if (op == '+')
		printf("%d", a + b);
	else if (op == '-')
		printf("%d", a - b);
	else if (op == '*')
		printf("%d", a * b);
	else if (op == '/')
		printf("%d", a / b);
	else if (op == '%')
		printf("%d", a % b);
}

int		main(int argc, char **argv)
{
	int a;
	int b;
	
	if (argc == 4)
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		do_op(a, b, *argv[2]);
	}
	printf("\n");
}
