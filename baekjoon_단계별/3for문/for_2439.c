#include <stdio.h>

int main_for2439(void)
{
	//	ù° �ٿ��� �� 1��, ��° �ٿ��� �� 2��, N��° �ٿ��� �� N���� ��� ����
	//	ù° �ٿ� N(1 �� N �� 100)�� �־�����.
	//	ù° �ٺ��� N��° �ٱ��� ���ʴ�� ���� ����Ѵ�.

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