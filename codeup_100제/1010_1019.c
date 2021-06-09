#include <stdio.h>

int main_1010_1019(void) 
{
//	1010 : [기초-입출력] 정수 1개 입력받아 그대로 출력하기(설명)
//	정수형(int)으로 변수를 선언하고, 변수에 정수값을 저장한 후
//	변수에 저장되어 있는 값을 그대로 출력해보자.
	printf("\n 1010 >>");

	int a;
	scanf_s("%d", &a);
	printf("%d", a);


//	1011 : [기초-입출력] 문자 1개 입력받아 그대로 출력하기(설명)
//	문자형(char)으로 변수를 하나 선언하고, 변수에 문자를 저장한 후
//	변수에 저장되어 있는 문자를 그대로 출력해보자.
	printf("\n 1011 >>");

	char b;
	scanf_s("%c", &b);
	printf("%c", b);


//	1012 : [기초-입출력] 실수 1개 입력받아 그대로 출력하기(설명)
//	실수형(float)로 변수를 선언하고 그 변수에 실수값을 저장한 후
//	저장되어 있는 실수값을 출력해보자.
	printf("\n 1012 >>");
	float c;
	scanf_s("%f", &c);
	printf("%f", c);

//	1013 : [기초-입출력] 정수 2개 입력받아 그대로 출력하기(설명) 해결
//	정수(int) 2개를 입력받아 그대로 출력해보자.
	printf("\n 1013 >>");
	int d, e;
	scanf_s("%d %d", &d, &e);
	printf("%d %d", d, e);

//	1014 : [기초-입출력] 문자 2개 입력받아 순서 바꿔 출력하기(설명) 해결
//	2개의 문자(ASCII CODE)를 입력받아서 순서를 바꿔 출력해보자.
	printf("\n 1014 >>");
	char f, g;
	scanf_s("%s%s", &f, &g);
	printf("%s %s", g, f);

//	1015 : [기초-입출력] 실수 입력받아 둘째 자리까지 출력하기(설명) 해결
//	실수(float) 1개를 입력받아 저장한 후,
//	저장되어 있는 값을 소수점 셋 째 자리에서 반올림하여
//	소수점 이하 둘 째 자리까지 출력하시오.
	printf("\n 1015 >>");
	float h;
	scanf_s("%f", &h);
	printf("%.2f", h);

//	1017 : [기초-입출력] 정수 1개 입력받아 3번 출력하기(설명) 해결
//	int형 정수 1개를 입력받아 공백을 사이에 두고 3번 출력해보자.
	printf("\n 1017 >>");
	int i;
	scanf_s("%d", &i);
	printf("%d %d %d", i, i, i);

//	1018 : [기초-입출력] 시간 입력받아 그대로 출력하기(설명) 해결
//	어떤 형식에 맞추어 시간이 입력될 때, 그대로 출력하는 연습을 해보자.
	printf("\n 1018 >>");
	int j, k;
	scanf_s("%d:%d", &j, &k);
	printf("%d:%d", j, k);

	return 0;
}
