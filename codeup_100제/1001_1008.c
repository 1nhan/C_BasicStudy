#include <stdio.h>

int main_1001_1008(void) 
{
//	1001 : [기초-출력] 출력하기01(설명)
//	printf()를 이용해 다음 단어를 출력하시오.
//	Hello
	printf("\n");
	printf("Hello");
	
//	1002 : [기초-출력] 출력하기02(설명) 
//	다음 문장을 출력해보자.
//	Hello World
//	(대소문자에 주의한다.)
	printf("\n");
	printf("Hello World");

//	1003 : [기초-출력] 출력하기03(설명)
//	다음과 같이 줄을 바꿔 출력해야 한다.
//	Hello
//	World
//	(두 줄에 걸쳐 줄을 바꿔 출력)
	printf("\n");
	printf("Hello\nWorld");

//	1004 : [기초-출력] 출력하기04(설명)
//	다음 문장을 출력하시오.
//	'Hello'
	printf("\n");
	printf("\'Hello\'");

//	1005 : [기초-출력] 출력하기05(설명)
//	다음 문장을 출력하시오.
//	"Hello World"
	printf("\n");
	printf("\"Hello World\"");

//	1006 : [기초-출력] 출력하기06(설명)
//	다음 문장을 출력하시오.
//	"!@#$%^&*()"
	printf("\n");
	printf("\"\!\@\#\$%%\^\&\*\(\)\"");
	
//	1007 : [기초-출력] 출력하기07(설명)
//	다음 경로를 출력하시오.
//	"C:\Download\hello.cpp"
//	(단, 큰따옴표도 함께 출력한다.)
	printf("\n");
	printf("C\:\\Download\\hello.cpp");
	
//	1008 : [기초-출력] 출력하기08(설명)
//	키보드로 입력할 수 없는 다음 모양을 출력해보자.
//	┌┬┐
//	├┼┤
//	└┴┘
	printf("\n");
	printf("\u250C\u252C\u2510\n\u251C\u253C\u2524\n\u2514\u2534\u2518");

	return 0;

}