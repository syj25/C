#include<stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#define MAX 10

void print_status()
{

	int i;
	int buffer[MAX] = { 0 };
	FILE* fp;
	fopen_s(&fp, "hero_status.txt", "r");

	if (fp == NULL)
	{
		printf("���� �ε� ����\n");
		return 1;
	}

	for (int i = 0; i < MAX; i++)
	{
		fscanf(fp, "%d", &buffer[i]);

	}
	printf("ü��: %d\n", buffer[0]);
	printf("���ݷ�: %d\n", buffer[1]);
	printf("����: %d\n", buffer[2]);
	printf("���: %d\n", buffer[3]);

	fclose(fp);
	printf("--------------------------------------------");

}
