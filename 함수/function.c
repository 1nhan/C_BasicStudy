#include <stdio.h>


//선언

void p(int num);
void function_without_return();
int function_with_return();
void function_without_params();
void function_with_params(int num1, int num2, int num3);
int apple(int total, int ate); // 전체 total에서 ate개를 먹고 남은 것을 반환

int add(int numX, int numY	);
int sub(int numX, int numY);
int mul(int numX, int numY);
int div(int numX, int numY);



int main_function(void)
{
	// 계산기




	//int num = 2;
	////printf("num은 %d 입니다. \n", num);
	//p(num);
	//// 2 + 3 ?
	//num = num + 3;
	////printf("num은 %d입니다. \n", num);
	//p(num);
	//num -= 1; // num = num - 1;
	////printf("num은 %d 입니다 \n", num);
	//p(num);

	//// 4 x 3 ?
	//num *= 3;
	////printf("num은 %d 입니다 \n", num);
	//p(num);
	//// 12 / 6 ?
	//num /= 6;
	////printf("num은 %d 입니다. \n", num);
	//p(num);
	
	// 반환 값이 없는 함수
	//function_without_return();
	
	// 반환 값이 있는 함수
	//int ret = function_with_return();
	//p(ret);

	// 파라미터(전달값)가 없는 함수
	//function_without_params();

	// 파라미터(전달값)가 있는 함수
	//function_with_params(3, 6, 9);

	// 파라미터(전달값)도 받고, 반환값이 있는 함수
	//int ret = apple(5, 2); // 5개의 사과 중 2개를 먹음
	//printf("사과 5개 중 2개를 먹으면?\n%d 개가 남아요 \n", ret);
	//printf("사과 %d개 중 %d개를 먹으면?\n%d 개가 남아요 \n", 5, 2, apple(5,2));

	// 계산기 함수1
	int num = 2;
	num = add(num, 3);
	p(num);

	num = sub(num, 1);
	p(num);

	num = mul(num, 3);
	p(num);	
	
	num = div(num, 3);
	p(num);

	return 0;
}

// 정의

void p(int num)
{
	printf("%d 입니다. \n", num);
}
void function_without_return() 
{ 
	printf("반환값이 없는 함수입니다"); 
}
int function_with_return()
{
	printf("반환값이 있는 함수입니다.");
	return 10;
}
void function_without_params() {
	printf("전달값이 없는 함수입니다.\n");
}
void function_with_params(int num1, int num2, int num3) {
	printf("전달값이 있는 함수입니다. 순서대로 %d, %d, %d 입니다\n", num1, num2, num3);
}

int apple(int total, int ate)
{
	printf("전달값과 변환값이 있는 함수입니다\n");
	return total - ate;
}

int add(int numX, int numY)
{
	printf("%d + %d = ", numX, numY);
	return numX + numY;
}
int sub(int numX, int numY) 
{ 
	printf("%d - %d = ", numX, numY);
	return numX - numY; 
}

int mul(int numX, int numY)
{
	printf("%d X %d = ", numX, numY);
	return numX * numY;
}
int div(int numX, int numY)
{
	printf("%d / %d = ", numX, numY);
	return numX / numY;
}

/*

반환형 함수이름(전달값)
{
	return ;
}

*/