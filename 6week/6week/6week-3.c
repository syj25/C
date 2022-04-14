#include<stdio.h>

int main() {

    /*
    for (int i = 1; i < 10; i += 2) {
        for (int j = 1; j < i + 1; j++) {
            printf("%d*%d = %d ", i, j, i * j);
        }
        printf("\n");
    }

    */


    for (int i = 1; i < 10; i++) 
    {
        if (i % 2 == 0)       //짝수면 생략
            continue;
        for (int j = 1; j < i + 1; j++)
        {
            if (j > i) // i보다 크면 for문 탈출!
                break;
            printf("%d*%d = %d ", i, j, i * j);  //구구단 곱 출력
        }
        printf("\n");  

    }

    }
