#include<stdio.h>
          
int main() {

    int num;
    printf("0이상 정수만..입력\n");
    scanf_s("%d", &num);

    switch (num / 10)  //num 는 int형이라 실수부분은 날라감
    {
    case 0:
        printf("0이상 10미만");
        break;                  //0이상 10미만이면 break하고 출력
    case 1:
        printf("10이상");
        break;                  //10이상 20미만이면 break하고 출력
    case 2:
        printf("20이상");
        break;                  //20이상 30미만이면 break하고 출력
                      
    default:
        printf("30이상");   //그외 30점이상



    }
}