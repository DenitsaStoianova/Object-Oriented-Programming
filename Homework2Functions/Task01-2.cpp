// Task01-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int pow(int number, int power)
{
	int powNum = 1;
	for (int i = 0; i < power; i++)
	{
		powNum *= number;
	}

	return powNum;
}

int main()
{
	int number1, number2;
	cin >> number1 >> number2;

	cout << pow(number1, number2) << endl;

	return 0;
}
