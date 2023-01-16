// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//

//HomeWork2

#include "stdafx.h"


int main()
{
	//Объявляем переменные
	int a, b;

	//Просим ввести первое число
	printf("Enter the first number: ");
	scanf_s("%i", &a);
	printf("\n");

	//Просим ввести второе число
	printf("Enter the second number: ");
	scanf_s("%i", &b);
	printf("\n");


	if (a > b)
	{
		//Если первое число больше
		printf("The first number is greater than the second");
	}
	else
	{
		if (a < b)
		{
			//Если первое число меньше
			printf("The first number is less than the second");
		}
		else
		{
			//Если числа равны
			printf("The numbers are equal");
		}
	}
}


