
#include<stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#define MAX 10
void choose_status()
{
	int num;
	printf("캐릭터를 선택하세요.\n 1. 검사\n");//이후 추가 예정
	scanf("%d", &num);
	if (num == 1)
	{
		FILE* fp = fopen("hero_status.txt", "w"); //용사 status 파일을 쓰기

		int hero_status[MAX] = { 20,2,10,5 }; //검사 status 
		for (int i = 0; i < MAX; i++)
			fprintf(fp, "%d\n", hero_status[i]); //0.체력 1.공격력 2.마나 3.골드량 4.... 9.



		fclose(fp);
	}



	FILE* fp = fopen("hero_status.txt", "r");  //용사 status 파일을 읽기

	int buffer[MAX] = { 0, };

	int i;


	for (i = 0; i < MAX; i++) // 배열의 크기만큼 값을 입력 받음

	{

		fscanf(fp, "%d", &buffer[i]);

	}


	fclose(fp); // 입력을 받은뒤에 파일닫기



	for (i = 0; i < 10; i++) // 입력받은 배열을 출력

	{

		printf("data[%d] : %d \n", i, buffer[i]);

	}





}
