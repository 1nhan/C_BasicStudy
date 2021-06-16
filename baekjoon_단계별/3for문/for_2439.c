#include <stdio.h>

int main_for2439(void)
{
	//	첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제
	//	첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.
	//	첫째 줄부터 N번째 줄까지 차례대로 별을 출력한다.

	int n;
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		for (int k = n; i < k; k--)
		{
			printf(" ");
		}
		for (int j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}