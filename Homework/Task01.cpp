// Task01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

struct Point
{
	double x;
	double y;
};

struct Rectangle
{
	Point point;
	double width;
	double height;
};

void readRectangle(Rectangle& rect)
{
	cout << "Enter point coordinates: ";
	cin >> rect.point.x >> rect.point.y;

	cout << "Enter rectangle width: ";
	cin >> rect.width;

	cout << "Enter rectangle height: ";
	cin >> rect.height;
}

void getIntersectionArea(Rectangle& r1, Rectangle& r2)
{
	double totalWidth = r1.width + r2.width;

	//determine x coordinate of the most right point 
	double rightPointx = 0.0;
	if (r1.point.x + r1.width < r2.point.x + r2.width)
	{
		rightPointx = (r2.point.x + r2.width);
	}
	else
	{
		rightPointx = (r1.point.x + r1.width);
	}

	//determine x coordinate of the most left point 
	double leftPointx = 0.0;
	if (r1.point.x < r2.point.x)
	{
		leftPointx = r1.point.x;
	}
	else
	{
		leftPointx = r2.point.x;
	}

	double width = totalWidth - (rightPointx - leftPointx);

	double totalHeight = r1.height + r2.height;

	// determine y coordinate of top point
	double upperPointY = 0.0;
	if (r1.point.y < r2.point.y)
	{
		upperPointY = r2.point.y;
	}
	else
	{
		upperPointY = r1.point.y;
	}

	// determine y coordinate of bottom point
	double bottomPointY = 0.0;
	if (r1.point.y - r1.height < r2.point.y - r2.height)
	{
		bottomPointY = r1.point.y - r1.height;
	}
	else
	{
		bottomPointY = r2.point.y - r2.height;
	}

	double height = totalHeight - (upperPointY - bottomPointY);

	// calculate intersection rectangle area
	double area = width * height;
	cout << endl << "Intersection rectangle area: " << area << endl;
}

int main()
{
	cout << "Enter first rectangle: " << endl;

	Rectangle rect1;
	readRectangle(rect1);

	cout << endl << "Enter second rectangle: " << endl;

	Rectangle rect2;
	readRectangle(rect2);

	getIntersectionArea(rect1, rect2);

	return 0;
}
