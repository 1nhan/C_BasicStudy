#include <stdio.h>

int main_for15552(void)
{
	//	두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
	//	첫째 줄에 테스트 케이스의 개수 T가 주어진다.
	//	각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)
	//	각 테스트 케이스마다 A+B를 출력한다.

	int a, b, t; //a, b는 입력받은 정수, t는 테스트 케이스
	scanf_s("%d", &t);

	for (int i = 0; i < t; i++)	// t번 반복해야되게 i를 조정해줌
	{
		scanf_s("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
	return 0;
}