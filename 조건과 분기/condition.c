#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main_co(void)
{
	//������ ź�ٰ� ����, �л�/ �Ϲ������� ���� (�Ϲ��� : 20��)
	int age = 15;
	//if (����)
	//{}
	//else
	//{}
	/*if (age = 20)
	{
		printf("�Ϲ��� �Դϴ�");
	}
	else
	{
		printf("�л��Դϴ�");
	}*/

	//�ʵ��л�(8~13) / ���л�(14~16)/ ����л�(17~19)���� ������?

	//if / else if / else
	//int age = 8;
	//if (age >= 8 && age <= 13)
	//{
	//	printf("�ʵ��л��Դϴ�\n");
	//}
	//else if (age >= 14 && age <= 16)
	//{
	//	printf("���л��Դϴ�.\n");
	//}
	//else if (age >= 17 && age <= 19)
	//{
	//	printf("����л��Դϴ�.\n");
	//}
	//else
	//// �� ������ ������ ���Ե��� ������ else�� �� \A
	//{
	//	printf("�л��� �ƴմϴ�.\n");
	//}

	// break / continue

	// 1������ 30������ �ִ� �ݿ��� 1������ 5������ ���� ��ǥ�� �մϴ�.

	/*
	for (int i = 1; i <= 30; i++)
	{
		printf("%d�� ��ǥ �غ� �ϼ���.\n", i);
		if (i >= 6)
		{
			printf("��û�� �ּ���,\n");
			break;
		}
	}*/

	// 1������ 30������ �ִ� �ݿ��� 7�� �л��� ���ļ� �Ἦ
	// 7���� �����ϰ� 6������ 10������ ���� ��ǥ�� �ϼ���.
	//int i;

	//for (i = 1; i <= 30; i++)  // 
	//{
	//	if (i <= 10 && i >= 6 && i != 7)
	//	{
	//		printf("%d���� ��ǥ �غ��մϴ�.\n", i);
	//	}
	//}
	//for (i = 1; i <= 30; i++)  // 
	//{
	//	if (i <= 10 && i >= 6)
	//	{
	//		if (i == 7)
	//		{
	//			printf("%d�� �л��� �Ἦ�Դϴ� \n", i);
	//			continue;	// continue�� ���� ���� �ݺ����� �Ѿ
	//						// break��  Ż��
	//		}
	//		printf("%d���� ��ǥ �غ��մϴ�.\n", i);
	//	}
	//}

	// && ||

	/*int a = 10;
	int b = 10;
	int c = 13;
	int d = 13;
	if (a == b && c == d)
	{
		printf("a�� b�� ����, c�� d�� �����ϴ�\n");
	}
	else
	{
		printf("���� ���� �ٸ��ϴ�\n");
	}*/
	
	// ����0 ����1 ��2

	//srand(time(NULL));
	//int i = rand() % 3; // 0~2
	//if (i == 0)
	//{
	//	printf("���� \n");
	//}
	//else if (i == 1)
	//{
	//	printf("����\n");
	//}
	//else if (i == 2)
	//{
	//	printf("��\n");
	//}
	//else {
	//	printf("��\n");
	//}

	//srand(time(NULL));
	//int i = rand() % 3; 
	//switch (i) // i �´� ���� �޾� case�� ���
	//{
	//case 0:printf("����"); break;
	//case 1:printf("����"); break;
	//case 2:printf("��"); break;
	//default:printf("�����Դϴ�."); break;
	//}

	// Up and Down
	srand(time(NULL));
	int num = rand() % 100 + 1; // 0 + 1 ~ 99 + 1 ������ ����
	printf("���� : %d\n", num);
	int answer = 0; // ����
	int chance = 5; // ��ȸ

	while (chance > 0)
	{
		printf("���� ��ȸ %d�� \n", chance--);
		printf("���ڸ� ���纸����.(1~100) : ");

		scanf_s("%d", &answer);
		if (answer == num) {
			printf("�����Դϴ�!");
		}
		else if(answer < num) {
			printf("Hint: ������ �� Ů�ϴ�.");
		}
		else if(answer > num) {
			printf("Hint: ������ �� �۽��ϴ�.");
		}
		else 
		{
			printf("�ٽ� �����ϼ���!");
		}
	}

	return 0;
}