#include <stdio.h>

int main_loop(void)
{
	printf("Hello World new\n");

	//���� Hello World�� 10�� ����ؾ� �ȴٸ�?

	// ++ �����ڶ�
	// 
	/*
	int a = 10;
	printf("a�� %d\n", a);
	a++;
	printf("a�� %d\n", a);
	a++;
	printf("a�� %d\n", a);
	
	int b = 20;
	printf("b�� %d\n", ++b); // 1���ϰ� ���
	printf("b�� %d\n", b++); // ������ 1����
	printf("b�� %d\n", b);	// ���� ���� b�� ���
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
	
	// �ݺ���
	// for, while, do while

	// for (����; ����; ����)
	//for (int i = 1; i <= 10; i++) 
	//{
	//	printf("Hello World %d\n", i);
	//}

	// while (����) {}
	/*int i = 1;
	while (i<=10)
	{
		printf("(while)Hello World %d\n", ++i);
	}*/

	// do { } while (����);
	/*int i = 1;
	do {
		printf("(do {} while(����))Hello World %d\n", i++);
	} while (i <= 10);*/

	// 2�� �ݺ���
	for (int i = 1; i <= 3; i++)
	{
		printf("ù ��° �ݺ��� : i = %d\n", i);

		for (int j = 1; j <= 5; j++) 
		{
			printf("�� ��° �ݺ��� : j = %d\n", j);
		}
	}

	// ������
	for (int i = 2; i <= 9; i++)
	{
		printf("----%d��----\n", i);
		for (int j = 1; j <= 9; j++) {
			printf("%d x %d = %d\n", i, j, i * j);
		}
	}

	// �Ƕ�̵带 �׾ƶ�.
	
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

	// �Ƕ�̵带 �׾ƶ� ������Ʈ
	/*
	    *    
	   ***   
	  *****  
	 *******  
	********* 
	*/
	/*int n;
	printf("�� ������ ��������?");
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