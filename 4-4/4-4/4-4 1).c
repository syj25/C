#include <stdio.h>


int main(void) {

	int num;

	printf("정수 입력: ");
	scanf_s("%d", &num);
	num = ~num;
	num = num + 1;
	printf("부호를 바꾼 결과: %d \n", num);

	return 0;


}
