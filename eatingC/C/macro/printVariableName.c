#include <stdio.h>
#define printVariableName(var) printf(#var "\n");

int main(int argc, char **argv)
{
	int a;

	printVariableName(a);

	return 0;
}

