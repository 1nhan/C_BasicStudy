#include <stdio.h>

int main(void)
{
	// �迭
	printf("�迭\n\n");
	int subway_1 = 30;
	int subway_2 = 40;
	int subway_3 = 50;


	printf("����ö 1ȣ���� %d���� Ÿ�� �ֽ��ϴ� \n", subway_1);
	printf("����ö 2ȣ���� %d���� Ÿ�� �ֽ��ϴ� \n", subway_2);
	printf("����ö 3ȣ���� %d���� Ÿ�� �ֽ��ϴ� \n", subway_3);

	// ���� ���� ������ �Բ� ���ÿ� ����
	printf("\n���� ���� ������ �Բ� ���ÿ� �����ϴ� �迭\n\n");
	int subway_array[3];   // [0] [1] [2] 
	subway_array[0] = 30;  
	subway_array[1] = 40;  
	subway_array[2] = 50;  

	for (int i = 0; i < 3; i++)
	{
		printf("%d. ����ö %dȣ���� %d���� Ÿ�� �ֽ��ϴ� \n", i+1, i + 1, subway_array[i]);
	}

	// �� ����
	printf("\n�� ����\n");
	
	// ���� �ʱ�ȭ�� �ݵ�� �ؾ��Ѵ�.
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	// �迭 ũ��� �׻� ����� �����Ѵ�.

	printf("\n\n�迭 ũ��� �׻� ����� ����\n\n");

	int size = 10;
	int arr1[10];
	for (int j = 0; j < 10; j++)
	{
		printf("%d\t", arr1[j]);
	}
	
	printf("\n\n�迭 ũ�⸦ 10���� �س��� �ΰ��� ������ ���� �Ѵٸ� �������� ������ ���ñ�\n\narr2 : ");

	int arr2[10] = { 1, 2 };

	for (int k = 0; k < 10; k++)
	{
		printf("%d\t", arr2[k]);
	}

	// arr[2]�� ������ ���
	printf("\n\narr[2]�� ������ ���\n\n");
	int arr3[] = { 1, 2 };
	for (int l = 0; l < 2; l++)
	{
		printf("%d\t", arr3[l]);
	}
	
	// �Ǽ����� �迭ũ�� 5�� �����ϰ� 3���� ��ƺ��� ���
	printf("\n\n�Ǽ����� �迭ũ�� 5�� �����ϰ� 3���� ��ƺ��� ���\n\n");
	float arr_f[5] = { 1.0f, 2.0f, 3.0f };
	
	for (int m = 0; m < 5; m++)
	{
		printf("%.2f\n", arr_f[m]);
	}

	// ����vs���ڿ�

	printf("\n\n���� vs ���ڿ�\n\n");
	// ����
	printf("����\n");
	char c = 'A';
	printf("%c\n", c);

	//���ڿ�
	printf("\n\n���ڿ�\n\n");
	char str0[6] = "coding";
	
	printf("str0[6] = ");
	printf("%s\n", str0);
	printf("str0�� sizeof = %d\n", sizeof(str0));
	// ���ڿ� ���� ���� �ǹ��ϴ� NULL ���� '\0'�� ���ԵǾ�� �Ѵ�.
	char str1[7] = "coding";
	printf("\nstr1[7] = ");
	printf("%s\n", str1);
	printf("str1�� sizeof = %d\n", sizeof(str1));

	char str2[] = "coding";
	for ( int n = 0 ; n < sizeof(str2); n++)
	{
		printf("%c\t", str2[n]);
	}

	// �ѱ۵� �غ���
	printf("\n\n�ѱ۵� �غ���\n\n");
	char kor[] = "������";
	printf("\n\n%s\n", kor);
	printf("%d\n", sizeof(kor));
	// ���� 1 ���� : 1byte , �ѱ� 1 ���� : 2byte
	 
	char c_array[10] = { 'c', 'o', 'd', 'e' };
	
	for (int p = 0; p < sizeof(c_array); p) {

	}
	
	return 0;
	
}