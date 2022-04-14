#include<stdio.h>

int main() {

    /*
     AZ
   + ZA
   -------
     99
     이므로 10A + Z + 10Z + A = 99
     11A + 11Z = 99
     A + Z = 11 인 숫자만 찾으면 된다.
     반복문을 중첩 시켜야 하므로
    */

    printf("A Z\n");
    for (int i = 0; i < 12; i++)
    {
        
        for (int j = 0; j < 12; j++)
        {
            if (i + j == 11)
            {
                printf("%d %d ", i, j);
            }
        }
        printf("\n");

    }

}
