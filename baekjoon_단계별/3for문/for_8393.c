#include <stdio.h>

int main(void)
{
//	n�� �־����� ��, 1���� n���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
//	ù° �ٿ� n (1 �� n �� 10,000)�� �־�����.
//	1���� n���� ���� ����Ѵ�.
	
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