#include <stdio.h>

int main(void) {
// ������Ʈ
// �̸�, ����, ������, Ű, ���˸� ������ ���ڸ� �Է¹ް� 
// ���� ������ ����ϴ� ���α׷��� �����
// ���̴� ������ �����Կ� Ű�� �Ҽ��� 1�ڸ��� �����.
	char name[256]; 
	printf("�̸���?");
	scanf_s("%s", name, sizeof(name));
	
	int age;
	printf("���̴�?");
	scanf_s("%d", &age);

	float weight;
	printf("������?");
	scanf_s("%f", &weight);

	float height;
	printf("Ű��?");
	scanf_s("%f", &height);

	char sin[256];
	printf("���߽��ϱ�?");
	scanf_s("%s", sin, sizeof(sin));

	//���� ���
	printf("\n\n ---------- ������ ���� ----------\n\n");
	printf("�̸�		:	%s\n", name);
	printf("����		:	%d\n", age);
	printf("������		:	%.1f\n", weight);
	printf("Ű		:	%.1f\n", height);
	printf("���˸�		:	%s\n", sin);
	return 0;
}