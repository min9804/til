/* 널 뽀개기 */
#include <stdio.h>

int main() {
  char null_1 = '\0';  // 이 3 개는 모두 동일하다
  char null_2 = 0;
  char null_3 = (char)NULL;  // 모두 대문자로 써야 한다

  char not_null = '0';

  printf("NULL 의 정수(아스키)값 : %d, %d, %d \n", null_1, null_2, null_3);
  printf("'0' 의 정수(아스키)값 : %d \n", not_null);

  return 0;
}

/* 문자열의 시작 */
#include <stdio.h>
int main() {
  char sentence_1[4] = {'P', 's', 'i', '\0'};
  char sentence_2[4] = {'P', 's', 'i', 0};
  char sentence_3[4] = {'P', 's', 'i', (char)NULL};
  char sentence_4[4] = {"Psi"};

  printf("sentence_1 : %s \n", sentence_1);  // %s 를 통해서 문자열을 출력한다.
  printf("sentence_2 : %s \n", sentence_2);
  printf("sentence_3 : %s \n", sentence_3);
  printf("sentence_4 : %s \n", sentence_4);

  return 0;
}

/*위는 'sentence_4 부터 들어 있는(sentence_4 는 배열의 시작점을 
 * 가리키고 있다는 사실을 알고 있겠죠?) 문자열을 출력해달라' 
 * 라는 의미로 %s 를 이용하였습니다. 이전의 %c 는 한 문자만을 
 * 출력하는 것이지만 %s 를 이용한다면 sentence_4 에서 부터 
 * 널이 나올 때 까지 문자를 계속 출력하게 됩니다.*/
//큰따옴표는 문자열 (한 개 이상의 문자)를 지정할 때 사용된다.
//작은 따옴표는 한 개의 문자를 지정할 때 사용된다.


/* 포인터 간단 복습 */
#include <stdio.h>
int main() {
  char word[30] = {"long sentence"};
  char *str = word;

  printf("%s \n", str);

  return 0;
}


char word[] = {"long sentence"};
//[ ] 안을 빈칸으로 두었다는 뜻은 컴파일러가 알아서 원소의 수를 세어서 빈칸을 채워 넣으라는 뜻

//일차원 배열을 가리키는 포인터는 (그 배열의 형)* 이다.

/* 문자열 입력 */
#include <stdio.h>
int main() {
  char words[30];

  printf("30 자 이내의 문자열을 입력해주세요! : ");
  scanf("%s", words);

  printf("문자열 : %s \n", words);

  return 0;
}

// scanf 를 통해서 문자열을 입력받습니다. 일단, 입력 받는 형식이 %s 입니다. 기존의 하나의 문자는 %c 였는데 , 문자열의 경우 %s 를 이용합니다.
//
// words 라는 배열의 이름 자체가 배열을 가리키고 있는 포인터 이기 때문에 words 의 값을 전달함으로써 배열의 (시작) 주소값을 잘 전달할 수 있습니다.
