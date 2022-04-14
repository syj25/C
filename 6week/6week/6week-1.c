#include<stdio.h>

int main() {
	int a, b ;
	int ans = 0;
	printf("두개의 수를 입력하?");

	scanf_s("%d %d", &a, &b); //두정수 입력받기

	ans = (a > b) ? a - b :  b - a;  // if 대신 삼항 연산자를 사용 a가 크면  a-b ,b가 더 크거나 같으면  b-a

	printf("%d", ans); 
	
}