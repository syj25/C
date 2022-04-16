#include<stdio.h>

int main() {
	int input,change = 0; //임의의 입력값(지불값),거스름돈
	int won[4] = {50000,10000,5000,1000};// won[0]: 오만원,won[1]: 만원 ,won[2]: 오천원 ,won[3]: 천원   
	int woncount[4] = { 0 };//지불할 지폐장수
	printf("임의의 지불값을 입력하시오. :");
	scanf_s("%d", &input);

		for (int i = 0; i < sizeof(won)/sizeof(int) ; i++) // 지폐단위개수 만큼 반복 
		{
			
			woncount[i] = input / won[i];//i번째지폐장수 결정
			input = input%won[i];//i번째 지폐장수 계산 후 남은 지불값 계산
		}
		
		
		change = input;// 지불못한 나머지 값 예를 들어 600원 500원..
		if (change != 0)//나머지 값이 0원이 아니면
		{
			woncount[3]++; //나머지 값은 최소단위인 천원으로 지불 
			change = won[3] - change; // 거스름돈
		}	 
	
	for (int i = 0; i < 4; i++)
		printf("지폐권%d원 : %d장 \n",won[i],woncount[i]);
	printf("거스름돈 : %d원\n", change);
	printf("1921458정세형");
	return 0;
};
