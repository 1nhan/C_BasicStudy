#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main_rand(void) 
{
	
	//strand(time(NULL)); // ���� �ʱ�ȭ
	//int num = rand() % 3 + 1;// 0+1 ~ 2+1

	printf("���� �ʱ�ȭ ���� .. \n");
	for (int i = 0; i < 10; i++) 
	{
		printf("%d ", rand() % 10);
	}
	
	srand(time(NULL));
	printf("���� �ʱ�ȭ ���� .. \n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", rand() % 10);
	}

	/*
	int num = rand() % � ��;
	� ������ ������ �Է��ϴ� �� 
	ex)
	*/ 

	return 0;

}