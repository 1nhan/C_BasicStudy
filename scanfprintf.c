#include <stdio.h>

int main(void) {
// 프로젝트
// 이름, 나이, 몸무게, 키, 범죄명 순으로 문자를 입력받고 
// 조서 내용을 출력하는 프로그램을 만들기
// 나이는 정수로 몸무게와 키는 소수점 1자리로 만든다.
	char name[256]; 
	printf("이름은?");
	scanf_s("%s", name, sizeof(name));
	
	int age;
	printf("나이는?");
	scanf_s("%d", &age);

	float weight;
	printf("몸무게?");
	scanf_s("%f", &weight);

	float height;
	printf("키는?");
	scanf_s("%f", &height);

	char sin[256];
	printf("뭐했습니까?");
	scanf_s("%s", sin, sizeof(sin));

	//내용 출력
	printf("\n\n ---------- 범죄자 정보 ----------\n\n");
	printf("이름		:	%s\n", name);
	printf("나이		:	%d\n", age);
	printf("몸무게		:	%.1f\n", weight);
	printf("키		:	%.1f\n", height);
	printf("범죄명		:	%s\n", sin);
	return 0;
}