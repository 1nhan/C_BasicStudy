#include <stdio.h>

int main(void)
{
	// 배열
	printf("배열\n\n");
	int subway_1 = 30;
	int subway_2 = 40;
	int subway_3 = 50;


	printf("지하철 1호차에 %d명이 타고 있습니다 \n", subway_1);
	printf("지하철 2호차에 %d명이 타고 있습니다 \n", subway_2);
	printf("지하철 3호차에 %d명이 타고 있습니다 \n", subway_3);

	// 여러 개의 변수를 함께 동시에 생성
	printf("\n여러 개의 변수를 함께 동시에 생성하는 배열\n\n");
	int subway_array[3];   // [0] [1] [2] 
	subway_array[0] = 30;  
	subway_array[1] = 40;  
	subway_array[2] = 50;  

	for (int i = 0; i < 3; i++)
	{
		printf("%d. 지하철 %d호차에 %d명이 타고 있습니다 \n", i+1, i + 1, subway_array[i]);
	}

	// 값 설정
	printf("\n값 설정\n");
	
	// 값은 초기화를 반드시 해야한다.
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	// 배열 크기는 항상 상수로 선언한다.

	printf("\n\n배열 크기는 항상 상수로 선언\n\n");

	int size = 10;
	int arr1[10];
	for (int j = 0; j < 10; j++)
	{
		printf("%d\t", arr1[j]);
	}
	
	printf("\n\n배열 크기를 10으로 해놓고 두개의 정수만 들어가게 한다면 나머지는 무엇이 들어올까\n\narr2 : ");

	int arr2[10] = { 1, 2 };

	for (int k = 0; k < 10; k++)
	{
		printf("%d\t", arr2[k]);
	}

	// arr[2]와 동일한 방법
	printf("\n\narr[2]와 동일한 방법\n\n");
	int arr3[] = { 1, 2 };
	for (int l = 0; l < 2; l++)
	{
		printf("%d\t", arr3[l]);
	}
	
	// 실수형의 배열크기 5로 설정하고 3개만 담아보면 어떨까
	printf("\n\n실수형의 배열크기 5로 설정하고 3개만 담아보면 어떨까\n\n");
	float arr_f[5] = { 1.0f, 2.0f, 3.0f };
	
	for (int m = 0; m < 5; m++)
	{
		printf("%.2f\n", arr_f[m]);
	}

	// 문자vs문자열

	printf("\n\n문자 vs 문자열\n\n");
	// 문자
	printf("문자\n");
	char c = 'A';
	printf("%c\n", c);

	//문자열
	printf("\n\n문자열\n\n");
	char str0[6] = "coding";
	
	printf("str0[6] = ");
	printf("%s\n", str0);
	printf("str0의 sizeof = %d\n", sizeof(str0));
	// 문자열 끝에 끝을 의미하는 NULL 문자 '\0'이 포함되어야 한다.
	char str1[7] = "coding";
	printf("\nstr1[7] = ");
	printf("%s\n", str1);
	printf("str1의 sizeof = %d\n", sizeof(str1));

	char str2[] = "coding";
	for ( int n = 0 ; n < sizeof(str2); n++)
	{
		printf("%c\t", str2[n]);
	}

	// 한글도 해보기
	printf("\n\n한글도 해보자\n\n");
	char kor[] = "이인한";
	printf("\n\n%s\n", kor);
	printf("%d\n", sizeof(kor));
	// 영어 1 글자 : 1byte , 한글 1 글자 : 2byte
	 
	char c_array[10] = { 'c', 'o', 'd', 'e' };
	
	for (int p = 0; p < sizeof(c_array); p) {

	}
	
	return 0;
	
}