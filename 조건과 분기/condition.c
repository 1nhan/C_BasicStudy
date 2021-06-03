#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main_co(void)
{
	//버스를 탄다고 가정, 학생/ 일반인으로 구분 (일반인 : 20세)
	int age = 15;
	//if (조건)
	//{}
	//else
	//{}
	/*if (age = 20)
	{
		printf("일반인 입니다");
	}
	else
	{
		printf("학생입니다");
	}*/

	//초등학생(8~13) / 중학생(14~16)/ 고등학생(17~19)으로 나누면?

	//if / else if / else
	//int age = 8;
	//if (age >= 8 && age <= 13)
	//{
	//	printf("초등학생입니다\n");
	//}
	//else if (age >= 14 && age <= 16)
	//{
	//	printf("중학생입니다.\n");
	//}
	//else if (age >= 17 && age <= 19)
	//{
	//	printf("고등학생입니다.\n");
	//}
	//else
	//// 위 세가지 조건이 포함되지 않으면 else에 다 \A
	//{
	//	printf("학생이 아닙니다.\n");
	//}

	// break / continue

	// 1번부터 30번까지 있는 반에서 1번에서 5번까지 조별 발표를 합니다.

	/*
	for (int i = 1; i <= 30; i++)
	{
		printf("%d번 발표 준비를 하세요.\n", i);
		if (i >= 6)
		{
			printf("경청해 주세요,\n");
			break;
		}
	}*/

	// 1번부터 30번까지 있는 반에서 7번 학생은 아파서 결석
	// 7번을 제외하고 6번부터 10번까지 조별 발표를 하세요.
	//int i;

	//for (i = 1; i <= 30; i++)  // 
	//{
	//	if (i <= 10 && i >= 6 && i != 7)
	//	{
	//		printf("%d번은 발표 준비합니다.\n", i);
	//	}
	//}
	//for (i = 1; i <= 30; i++)  // 
	//{
	//	if (i <= 10 && i >= 6)
	//	{
	//		if (i == 7)
	//		{
	//			printf("%d번 학생은 결석입니다 \n", i);
	//			continue;	// continue에 대해 다음 반복으로 넘어감
	//						// break는  탈출
	//		}
	//		printf("%d번은 발표 준비합니다.\n", i);
	//	}
	//}

	// && ||

	/*int a = 10;
	int b = 10;
	int c = 13;
	int d = 13;
	if (a == b && c == d)
	{
		printf("a와 b는 같고, c와 d도 같습니다\n");
	}
	else
	{
		printf("값이 서로 다릅니다\n");
	}*/
	
	// 가위0 바위1 보2

	//srand(time(NULL));
	//int i = rand() % 3; // 0~2
	//if (i == 0)
	//{
	//	printf("가위 \n");
	//}
	//else if (i == 1)
	//{
	//	printf("바위\n");
	//}
	//else if (i == 2)
	//{
	//	printf("보\n");
	//}
	//else {
	//	printf("모름\n");
	//}

	//srand(time(NULL));
	//int i = rand() % 3; 
	//switch (i) // i 맞는 값을 받아 case를 출력
	//{
	//case 0:printf("가위"); break;
	//case 1:printf("바위"); break;
	//case 2:printf("보"); break;
	//default:printf("에러입니다."); break;
	//}

	// Up and Down
	srand(time(NULL));
	int num = rand() % 100 + 1; // 0 + 1 ~ 99 + 1 사이의 숫자
	printf("숫자 : %d\n", num);
	int answer = 0; // 정답
	int chance = 5; // 기회

	while (chance > 0)
	{
		printf("남은 기회 %d번 \n", chance--);
		printf("숫자를 맞춰보세요.(1~100) : ");

		scanf_s("%d", &answer);
		if (answer == num) {
			printf("정답입니다!");
		}
		else if(answer < num) {
			printf("Hint: 정답은 더 큽니다.");
		}
		else if(answer > num) {
			printf("Hint: 정답은 더 작습니다.");
		}
		else 
		{
			printf("다시 도전하세요!");
		}
	}

	return 0;
}