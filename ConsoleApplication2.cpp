// ConsoleApplication2.cpp: ���������� ����� ����� ��� ����������� ����������.
//

//HomeWork2

#include "stdafx.h"


int main()
{
	//��������� ����������
	int a, b;

	//������ ������ ������ �����
	printf("Enter the first number: ");
	scanf_s("%i", &a);
	printf("\n");

	//������ ������ ������ �����
	printf("Enter the second number: ");
	scanf_s("%i", &b);
	printf("\n");


	if (a > b)
	{
		//���� ������ ����� ������
		printf("The first number is greater than the second");
	}
	else
	{
		if (a < b)
		{
			//���� ������ ����� ������
			printf("The first number is less than the second");
		}
		else
		{
			//���� ����� �����
			printf("The numbers are equal");
		}
	}
}


