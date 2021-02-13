#include <unistd.h>

int main()
{
	char arr[6] = "hello";
	
	int i;
	
	while (arr[i])
	{	
		write(1, &arr[i-1], 1);
		i++;
	}

	
	return (0);
}


if (!(('a' <= c && c <= 'z') || (('A' < c && c <= 'Z'))); 
