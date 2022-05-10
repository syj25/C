#include<stdio.h>

int test1() {
	int arr[5];
	int sum = 0, i;
	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;

	for (i = 0; i < 5; i++)
		sum += arr[i];
	printf("배열요소에 저장된 값의 합: %d\n", sum);
	
}
int test2() {
	char str[] = "Good morning!";
	printf("배열 str의 크기 : %d \n", sizeof(str));
	printf("널 문자 문자형 출력 : %c \n", str[13]);
	printf("널 문자 정수형 출력 : %d \n", str[13]);

	str[12] = '?';   
	printf("문자열 출력: %s \n", str);
}

int test3() {
	char str[50];
	int idx = 0;
	printf("문자열 입력: ");
	scanf_s("%s", str,50);
	printf("입력 받은 문자열: %s \n",str);
	
	printf("문자 단위 출력: ");
	while (str[idx] != '\0')
	{
		printf("%c", str[idx]);
		idx++;
	}
	printf("\n");
}

int test4() {
	int villa[4][2];
	int popu, i, j;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d층%d호 인구수: ", i + 1, j + 1);
			scanf_s("%d", &villa[i][j]);
		}
	}

	for (i = 0; i < 4; i++)
	{
		popu = 0;
		popu += villa[i][0];
		popu += villa[i][1];
			printf("%d층 인구수: %d \n", i + 1, popu);
	}
	return 0;

}int test5() {
	int i, j;
	int arr1[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	int arr2[3][3] = {
		{1},
		{4, 5},
		{7, 8, 9}
	};
	
	int arr3[3][3] = { 1,2,3,4,5,6,7 };
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d ", arr1[i][j]);
		printf("\n");
		
	}
	printf("\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d ", arr2[i][j]);
		printf("\n");
	}
	printf("\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d ", arr3[i][j]);
		printf("\n");
	}
}
int main() {
	
	test5();
}


