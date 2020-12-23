#include <stdio.h>
int main() {
        int i, j, m, n, k;
        printf("숫자를 입력하세요: \n");
        scanf("%d", &n);
	k = 2*n;

        for (i=1; i<=n; i++) {
        	for(m = 1; m < i; m++){
			printf(" ");
		}	
		for(j = 1; j <= k-((2*i)-1); j++) {
                        printf("*");
                }
                printf("\n");
        }
      return 0;
}

