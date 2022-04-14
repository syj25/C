#include<stdio.h>

int main() {

    int score[3] = { 0 }; 
    int avg = 0;
    for (int i = 0; i < 3; i++)
    {
        scanf_s("%d", &score[i]);  //국어 영어 수학 점수 받기 
        avg += score[i];        //국어 영어 수학 점수 다 더하기
    }
    avg = avg / 3; //국영수 평균 
    printf("당신의 평균: %d\n", avg);

    switch (avg / 10)  //avg 는 int형이라 실수부분은 날라감
    {
    case 10:
        printf("A");
        break;                  //만점이면 브레이크 하고 출력!
    case 9:
        printf("A");
        break;                  //90점이상이면 브레이크 하고 출력!
    case 8:
        printf("B");
        break;                  //80점이상이면 브레이크 하고 출력!
    case 7:
        printf("C");
        break;                  //70점이상이면 브레이크 하고 출력!
    case 5:
        printf("D");
        break;                  //50점이상이면 브레이크 하고 출력!
    default:
        printf("F");            
 
     

    }
}