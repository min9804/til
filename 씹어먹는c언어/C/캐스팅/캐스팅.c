#include <stdio.h>
int main()
{
	float f;
	int i;
	printf("실수를 입력 하세요 :");
	scanf("%f", &f);
	
	if (f < 0)
	{
		f *= -1;
	}

	i = (int)(f*100)%100;
	printf("i=%d \n", i);

	return 0;
}
	
