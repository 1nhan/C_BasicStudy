#include <stdio.h>

int main(void) 
{
//	사분면은 1부터 4까지 번호를 갖는다. "Quadrant n"은 "제n사분면"이라는 뜻이다.
//	첫 줄에는 정수 x가 주어진다. (?1000 ≤ x ≤ 1000; x ≠ 0) 다음 줄에는 정수 y가 주어진다. 
//	(?1000 ≤ y ≤ 1000; y ≠ 0)
//	점 (x, y)의 사분면 번호(1, 2, 3, 4 중 하나)를 출력한다.
	
	int x, y;
	scanf_s("%d %d", &x, &y);

	if (0 < x && 0 < y) { printf("1"); }
	else if(0 > x && 0 < y){printf("2");}
	else if (0 > x && 0 > y) { printf("3"); }
	else { printf("4"); }

	return 0;
}