#include <stdio.h>
int main() {
	int i, j, m, n;
	printf("숫자를 입력하세요: \n");
	scanf("%d", &n);
	

	for (i=1; i<=n; i++) {
		for(m=1; m <= (n-i); m++) {
			printf(" ");
		}
		for(j=1; j <= 2*i-1; j++) {
			printf("*");
	   	}
		printf("\n");

	}
      return 0;
}      

