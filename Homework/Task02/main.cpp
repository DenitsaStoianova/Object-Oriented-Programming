// Task02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "IceCreamContainer.h"
#include "IceCream.h"
#include "IceCreamFlavour.h"
using namespace std;

const int MAX = 10;

int main()
{
	/*
Homework 1:

double pocketMoney;
cout << "Enter pocket money: ";
cin >> pocketMoney;

// b)

IceCream iceCreams[MAX];

int numberOfIceCreams;
do
{
	cout << "Enter number of ice creams: ";
	cin >> numberOfIceCreams;

} while (numberOfIceCreams < 1 || numberOfIceCreams > MAX);


for (int i = 0; i < numberOfIceCreams; i++)
{
	iceCreams[i].read();
}
*/

	IceCream iceCreamsArr[5];

	IceCreamFlavour flav0("vanilla", 1.50);
	iceCreamsArr[0].setFlavour(flav0);
	iceCreamsArr[0].setBallsCount(3);
	iceCreamsArr[0].setName("Vanilla Paradise");

	IceCreamFlavour flav1("chocolate", 2.00);
	iceCreamsArr[1].setFlavour(flav1);
	iceCreamsArr[1].setBallsCount(3);
	iceCreamsArr[1].setName("Chocolate");

	IceCreamFlavour flav2("vanilla", 1.20);
	iceCreamsArr[2].setFlavour(flav2);
	iceCreamsArr[2].setBallsCount(4);
	iceCreamsArr[2].setName("Vanilla Ice Cream");

	IceCreamFlavour flav3("caramel", 3.50);
	iceCreamsArr[3].setFlavour(flav3);
	iceCreamsArr[3].setBallsCount(2);
	iceCreamsArr[3].setName("Caramel Paradise");

	IceCreamFlavour flav4("coconut", 2.90);
	iceCreamsArr[4].setFlavour(flav4);
	iceCreamsArr[4].setBallsCount(5);
	iceCreamsArr[4].setName("Coconut Ice Cream");

	IceCreamFlavour flav5("strawberry", 5.10);
	IceCream strawberry;
	strawberry.setFlavour(flav5);
	strawberry.setBallsCount(3);
	strawberry.setName("Strawberry");

	IceCreamFlavour flav6("banana", 2.80);
	IceCream banana;
	banana.setFlavour(flav6);
	banana.setBallsCount(4);
	banana.setName("Banana");

	/*

	// c)
	IceCream iceCreamForChild = getIceCreamForChild(iceCreamsArr, 5, pocketMoney);
	cout << endl << "The best ice cream for child: " << iceCreamForChild.getName() << endl;

	// d)
	IceCreamFlavour flav("vanilla", 1.0);
	findIceCreams(iceCreamsArr, 5, flav);

	*/


	//Homework 2

	// c)
	IceCreamContainer container(iceCreamsArr, 5);
	container.addIceCream(strawberry);
	container.addIceCream(banana);
	container.removeIceCream(strawberry);

	cout << "Has: " << boolalpha << container.has(banana) << endl;
	cout << "Price of all ice creams: " << container.getPriceOfAllIceCreams() << endl;

	container.print();

	// b)
	IceCream iceCreams[2];

	IceCreamFlavour flavour0("vanilla", 1.50);
	iceCreams[0].setFlavour(flavour0);
	iceCreams[0].setBallsCount(3);
	iceCreams[0].setName("Vanilla Paradise");

	IceCreamFlavour flavour1("chocolate", 2.00);
	iceCreams[1].setFlavour(flavour1);
	iceCreams[1].setBallsCount(3);
	iceCreams[1].setName("Chocolate");

	IceCreamContainer cont(iceCreams, 2);
	cont.addIceCream(banana);
	cont.removeIceCream(banana);

	cout << "Capacity: " << cont.getCapacity() << endl;

	// a)

	IceCreamFlavour f("banana", 2.80);
	IceCream ban;
	ban.setFlavour(f);
	ban.setBallsCount(4);
	ban.setName("Banana");

	bool equals = banana == ban;

	cout << equals << endl;

	IceCreamFlavour f1("melon", 0.80);
	IceCream melon;
	melon.setFlavour(f1);
	melon.setBallsCount(2);
	melon.setName("Melon");

	bool res = melon > banana;
	cout << res << endl;

	IceCreamFlavour f2("banana", 2.80);
	IceCream b;
	b.setFlavour(f2);
	b.setBallsCount(4);
	b.setName("Ban");

	bool notEqual = ban != b;
	cout << notEqual << endl;

	IceCreamFlavour f3("banana", 0.80);
	IceCream b3;
	b3.setFlavour(f3);
	b3.setBallsCount(4);
	b3.setName("Ice Cream Banana");

	bool res3 = b3 < b;
	cout << res3 << endl;

	return 0;
}
