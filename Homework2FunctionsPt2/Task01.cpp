// Task01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

const int SIZE = 100;

void createArray(int * arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}

void reverseArray(int * arr, int size)
{
	for (int i = size - 1; i >= 0; i--)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	cout << "Number of elements:";
	int numOfElements;
	cin >> numOfElements;

	int arr[SIZE];

	createArray(arr, numOfElements);
	reverseArray(arr, numOfElements);

	return 0;
}
