#include <stdio.h>

int main_if9498()
{
	//	���� ������ �Է¹޾� 
	//	90 ~ 100���� A, 
	//	80 ~ 89���� B, 
	//	70 ~ 79���� C, 
	//	60 ~ 69���� D, 
	//	������ ������ F�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	//	ù° �ٿ� ���� ������ �־�����. ���� ������ 0���� ũ�ų� ����, 100���� �۰ų� ���� �����̴�.

	int result;
	scanf("%d", &result);
	if (90 <= result && result <= 100) { printf("A"); }
	else if (80 <= result && result <= 89) { printf("B"); }
	else if (70 <= result && result <= 79) { printf("C"); }
	else if (60 <= result && result <= 69) { printf("D"); }
	else { printf("F"); }
}
