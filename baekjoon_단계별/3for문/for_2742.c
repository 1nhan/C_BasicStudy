#include <stdio.h>

int main_for2742(void)
{
	//	자연수 N이 주어졌을 때, N부터 1까지 한 줄에 하나씩 출력하는 프로그램을 작성하시오.
	//	첫째 줄에 100,000보다 작거나 같은 자연수 N이 주어진다.
	//	첫째 줄부터 N번째 줄 까지 차례대로 출력한다.
	
	int n;
	scanf_s("%d", &n);

	for (int i = n; 0 < i; i--)
	{
		printf("%d\n", i);
	}
	return 0;
}