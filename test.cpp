#include <iostream>
#include "fact.h"
#include "Stepen.h"
#include "Fibonacci.h"
#include <iomanip>
#include <stdio.h>
#include <cmath>

using namespace std;

void zadanie4()
{
	cout << endl;

	cout << "Ряд Фибоначчи" << endl << endl;

	for (int i = 0; i < 20; ++i)
	{
		cout << fibonacci(i) << " ";
	}

	cout << endl << endl;

	int Fnum;

	cout << "Введите кол-во чисел из ряда Фибоначчи: "; cin >> Fnum;

	if (Fnum > 20)cout << "Введённое число больше 20" << endl << endl;
	else if (Fnum < 1)cout << "Меньше 1 никак :)" << endl << endl;
	else
	{
		cout << endl;

		for (int i = 0; i < Fnum; ++i)
		{
			cout << fibonacci(i) << " ";
		}
	}



	cout << endl << endl;

}

void zadanie3()
{
	cout << endl;

	cout << "Ряд Фибоначчи" << endl << endl;

	for (int i = 0; i < 15; ++i)
		cout << fibonacci(i) << " ";

	cout << endl << endl;
}

void zadanie2()
{
	cout << endl;

	cout << "Возведение в степень" << endl << endl;

	int number, stepen, buffer;

	cout << "Число/цифра: "; cin >> number; cout << endl;
	cout << "Степень: "; cin >> stepen; cout << endl;

	buffer = Stepen(number, stepen);

	cout << "Ответ: " << buffer << endl << endl;
}

void zadanie1()
{
	cout << endl;

	cout << "Факториал" << endl << endl;

	int value;

	cout << "Число/цифра: "; cin >> value;

	cout << "Факториал " << value << " = " << fixed << setprecision(0) << fact(value) << endl << endl;
}

int main()
{
	setlocale(LC_ALL, "");

	int number;

	for (;;)
	{
		cout << "Введите номер задания: "; cin >> number;

		if (number == 1)zadanie1();
		else if (number == 2)zadanie2();
		else if (number == 3)zadanie3();
		else if (number == 4)zadanie4();
		else cout << "Введите номер от 1 до 4! " << endl << endl;
	}
}