#include <stdio.h>

int main(void) 
{
//	��и��� 1���� 4���� ��ȣ�� ���´�. "Quadrant n"�� "��n��и�"�̶�� ���̴�.
//	ù �ٿ��� ���� x�� �־�����. (?1000 �� x �� 1000; x �� 0) ���� �ٿ��� ���� y�� �־�����. 
//	(?1000 �� y �� 1000; y �� 0)
//	�� (x, y)�� ��и� ��ȣ(1, 2, 3, 4 �� �ϳ�)�� ����Ѵ�.
	
	int x, y;
	scanf_s("%d %d", &x, &y);

	if (0 < x && 0 < y) { printf("1"); }
	else if(0 > x && 0 < y){printf("2");}
	else if (0 > x && 0 > y) { printf("3"); }
	else { printf("4"); }

	return 0;
}