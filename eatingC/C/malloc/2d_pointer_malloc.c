//포인터 배열을 이용해서 2차원 배열 할당하기

/*int main(int argc, char **argv)
{
	int i;
	int x, y;
	int **arr;

	printf("arr[x][y] 를 만들 것입니다. \n");
	scanf("%d %d", &x, &y);

	arr = (int **)malloc(sizeof(int *) * x);
	// int* 형의 원소를 x 개 가지는 1차원 배열 생성

	for (i = 0; i < x; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * y);
	}

	printf("생성 완료! \n");

	for (i = 0; i < x; i++)
	{
		free(arr[i]);
	}
	free(arr);

	return 0;
}*/
//메모리에 연속적으로 존재하는 진짜 2차원 배열
//int (*arr)[width] = (int (*)[width])malloc(height * width * sizeof(int));


#include <stdio.h>
#include <stdlib.h>

int main()
{
	int width, height;
	printf("배열 행 갯수 : ");
	scanf("%d", &width);
	printf("배열 열 갯수 : ");
	scanf("%d", &height);

	int(*arr)[width] = (int(*)[width])malloc(height * width * sizeof(int));
	for (int i = 0; i < width; i++)
	{
		for (int j = 0; j < height; j++)
		{
			int data;
			scanf("%d", &data);
			arr[i][j] = data;
		}
	}

	for (int i = 0; i < width; i++)
	{
		for (int j = 0; j < height; j++)
		{
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}

	free(arr);
}
