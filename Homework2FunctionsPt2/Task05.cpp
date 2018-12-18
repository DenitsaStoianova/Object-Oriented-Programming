// Task05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

const int ROW_SIZE = 100;
const int COL_SIZE = 100;

void findDigitsInRows(int matrix[][COL_SIZE], int rows, int cols)
{
	int evenDigitsCount, oddDigitsCount;

	for (int i = 0; i < rows; i++)
	{
		evenDigitsCount = 0;
		oddDigitsCount = 0;

		for (int j = 0; j < cols; j++)
		{
			if (matrix[i][j] % 2 == 0)
			{
				evenDigitsCount++;
			}
			else
			{
				oddDigitsCount++;
			}
		}

		cout << "Even digits in " << i + 1 << " row: " << evenDigitsCount << endl;
		cout << "Odd digits in " << i + 1 << " row: " << oddDigitsCount << endl;

	}
}


void findDigitsInCols(int matrix[][COL_SIZE], int rows, int cols)
{
	int evenDigitsCount, oddDigitsCount;

	for (int i = 0; i < cols; i++)
	{
		evenDigitsCount = 0;
		oddDigitsCount = 0;

		for (int j = 0; j < rows; j++)
		{
			if (matrix[j][i] % 2 == 0)
			{
				evenDigitsCount++;
			}
			else
			{
				oddDigitsCount++;
			}
		}

		cout << "Even digits in " << i + 1 << " col: " << evenDigitsCount << endl;
		cout << "Odd digits in " << i + 1 << " col: " << oddDigitsCount << endl;
	}
}

int main()
{
	int rows, cols;
	cin >> rows >> cols;

	int matrix[ROW_SIZE][COL_SIZE];

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cin >> matrix[i][j];
		}
	}

	findDigitsInRows(matrix, rows, cols);
	cout << endl;
	findDigitsInCols(matrix, rows, cols);

	return 0;
}
