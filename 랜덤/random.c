#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main_rand(void) 
{
	
	//strand(time(NULL)); // 난수 초기화
	//int num = rand() % 3 + 1;// 0+1 ~ 2+1

	printf("난수 초기화 이전 .. \n");
	for (int i = 0; i < 10; i++) 
	{
		printf("%d ", rand() % 10);
	}
	
	srand(time(NULL));
	printf("난수 초기화 이후 .. \n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", rand() % 10);
	}

	/*
	int num = rand() % 어떤 수;
	어떤 수에는 범위를 입력하는 것 
	ex)
	*/ 

	return 0;

}