#include <stdio.h>

int main(void) {

	// 피라미드만들기 프로젝트
	/*
	
	    *
	   ***
	  *****
	 *******
	*********
	
	*/

	int a; // 몇 층으로 쌓을지를 입력받을 변수 선언
	printf("몇 층으로 쌓을래?");
	scanf_s("%d", &a);

	for(int i = 0; i < a; i++ )  // i부터 a보다 작을때까지 실행시키는 반복문
	{
		for (int j = i; j < a - 1; j++) // 공백부분을 만들기 위해 만든 j 반복문
										//
		{
			printf(" ");
		}

		for (int k = 0; k < i * 2 + 1; k++) // *을 만들기 위한 k 반복분
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}