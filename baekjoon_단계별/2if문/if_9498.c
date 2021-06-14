#include <stdio.h>

int main_if9498()
{
	//	시험 점수를 입력받아 
	//	90 ~ 100점은 A, 
	//	80 ~ 89점은 B, 
	//	70 ~ 79점은 C, 
	//	60 ~ 69점은 D, 
	//	나머지 점수는 F를 출력하는 프로그램을 작성하시오.
	//	첫째 줄에 시험 점수가 주어진다. 시험 점수는 0보다 크거나 같고, 100보다 작거나 같은 정수이다.

	int result;
	scanf("%d", &result);
	if (90 <= result && result <= 100) { printf("A"); }
	else if (80 <= result && result <= 89) { printf("B"); }
	else if (70 <= result && result <= 79) { printf("C"); }
	else if (60 <= result && result <= 69) { printf("D"); }
	else { printf("F"); }
}
