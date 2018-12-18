// Task01-5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

bool isAlpha(char ch)
{
	if (ch >= 'a' && ch <= 'z'|| ch >= 'A' && ch <= 'Z')
	{
		return true;
	}

	return false;
}

bool isDigit(char ch)
{
	if ((int)ch >= 48 && (int)ch <= 57)
	{
		return true;
	}

	return false;
}

int main()
{
	char symbol;
	cin >> symbol;

	cout << "Is alpha: " << isAlpha(symbol) << endl;
	cout << "Is digit: " << isDigit(symbol) << endl;

	return 0;
}
