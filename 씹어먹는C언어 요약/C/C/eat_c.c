#include <stdio.h>
int main() {
	double celsius;

	printf("���� �µ��� ȭ�� �µ��� �ٲ��ִ� ���α׷� �Դϴ�. \n");
	printf("���� �µ��� �Է��� �ּ��� : ");
	scanf("%lf", &celsius);

	printf("���� %f ���� ȭ���� %f �� �Դϴ�. \n", celsius, 9 * celsius / 5 + 32);

	return 0;
}