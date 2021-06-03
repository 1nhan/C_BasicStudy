#include <stdio.h>

int main_loop(void)
{
	printf("Hello World new\n");

	//만약 Hello World를 10번 출력해야 된다면?

	// ++ 연산자란
	// 
	/*
	int a = 10;
	printf("a는 %d\n", a);
	a++;
	printf("a는 %d\n", a);
	a++;
	printf("a는 %d\n", a);
	
	int b = 20;
	printf("b는 %d\n", ++b); // 1더하고 출력
	printf("b는 %d\n", b++); // 문장후 1더함
	printf("b는 %d\n", b);	// 연산 없이 b를 출력
	*/
	//int i = 1;
	//printf("Hello World %d\n", i++);	//1
	//printf("Hello World %d\n", i++);	//2
	//printf("Hello World %d\n", i++);	//3
	//printf("Hello World %d\n", i++);	//4
	//printf("Hello World %d\n", i++);	//5
	//printf("Hello World %d\n", i++);	
	//printf("Hello World %d\n", i++);
	//printf("Hello World %d\n", i++);
	//printf("Hello World %d\n", i++);
	//printf("Hello World %d\n", i++);	//19
	
	// 반복문
	// for, while, do while

	// for (선언; 조건; 증감)
	//for (int i = 1; i <= 10; i++) 
	//{
	//	printf("Hello World %d\n", i);
	//}

	// while (조건) {}
	/*int i = 1;
	while (i<=10)
	{
		printf("(while)Hello World %d\n", ++i);
	}*/

	// do { } while (조건);
	/*int i = 1;
	do {
		printf("(do {} while(조건))Hello World %d\n", i++);
	} while (i <= 10);*/

	// 2중 반복문
	for (int i = 1; i <= 3; i++)
	{
		printf("첫 번째 반복문 : i = %d\n", i);

		for (int j = 1; j <= 5; j++) 
		{
			printf("두 번째 반복문 : j = %d\n", j);
		}
	}

	// 구구단
	for (int i = 2; i <= 9; i++)
	{
		printf("----%d단----\n", i);
		for (int j = 1; j <= 9; j++) {
			printf("%d x %d = %d\n", i, j, i * j);
		}
	}

	// 피라미드를 쌓아라.
	
	/*
	*
	**
	***
	****
	*****
	*/

	/*for (int i = 1; i <= 5; ++i) 
	{
		for (int j = 1; j <= i; ++j)
		{
			printf("*");
		}
		printf("\n");
	}*/

	/*
	    *
	   **
	  ***
	 ****
	*****
	*/
	
	/*for (int i = 1; i <= 5; i++)
	{
		for (int j = 4; j >= i; j--)
		{
			printf(" ");
		}

		for (int k = 1; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");
	}*/

	// 피라미드를 쌓아라 프로젝트
	/*
	    *    
	   ***   
	  *****  
	 *******  
	********* 
	*/
	/*int n;
	printf("몇 층으로 쌓을래요?");
	scanf_s("%d", &n);

	for (int i = 0; i <= n; i++)
	{
		for (int j =);
		{
			printf(" ");
		}
		for (int k = 1; k <= ( 2 * i ) + 1; k++)
		{
			printf("*");
		}
		for (int l =)
		{
			printf(" ");
		}
		printf("\n");
	}*/
	
	int a, b;
	scanf_s("%d.%d", &a, &b);
	printf("%d\n%06d", a, b);
	return 0;
}