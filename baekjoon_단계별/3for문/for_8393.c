#include <stdio.h>

int main_for8393(void)
{
//	n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.
//	첫째 줄에 n (1 ≤ n ≤ 10,000)이 주어진다.
//	1부터 n까지 합을 출력한다.
	
	int n, i;
	int s = 0;

	scanf_s("%d", &n);
	for (i = 1; i <= n; i++) 
	{
		s += i;
	}
	printf("%d", s);

	return 0;
}