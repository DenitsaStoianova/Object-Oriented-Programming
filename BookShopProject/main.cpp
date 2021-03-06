// BookShop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Newspaper.h"
#include "Magazine.h"
#include"Book.h"
#include "Comics.h"
#include "BookShop.h"
using namespace std;

bool comparePrintEditionsByName(PrintEdition* printEdition1, PrintEdition* printEdition2)
{
	return strcmp(printEdition1->getName(), printEdition2->getName()) > 0;
}

bool comparePrintEditionsByPages(PrintEdition* printEdition1, PrintEdition* printEdition2)
{
	return printEdition1->getPages() > printEdition2->getPages();
}

int main()
{
	Newspaper newspaper1(0.80, 35, 10, "Newspaper 1", "27.03.2018", 5),
			  newspaper2(1.20, 80, 3, "Newspaper 2", "05.07.2019", 2),
		      newspaper3(0.30, 50, 20, "Newspaper 3", "01.01.2019", 0);
		      
	Magazine magazine1(2.30, 200, 2, "Magazine 1", true, 9),
		     magazine2(3.20, 30, 15, "Magazine 2", false, 2),
		     magazine3(0.90, 45, 0, "Magazine 3", false, 10);

	Book book1(1.45, 500, 40, "Book 1", "Author 1", true, 1999),
		 book2(2.30, 1000, 3, "Book 2", "Author 2", true, 2014),
		 book3(0.10, 680, 100, "Book 3", "Author 3", false, 1989);

	Comics comics1(1.00, 90, 7, "Comics 1", "Publishers 1", "English", 2019),
		   comics2(0.70, 10, 50, "Comics 2", "Publishers 2", "Bulgarian", 2000),
		   comics3(0.99, 200, 3, "Comics 3", "Publishers 3", "English", 2006);

	BookShop bookshop;

	bookshop.setName("Books Paradise");
	bookshop.setLocation("Sofia");

	bookshop.addPrintEdition(newspaper1);
	bookshop.addPrintEdition(newspaper2);
	bookshop.addPrintEdition(newspaper3);

	bookshop.addPrintEdition(magazine1);
	bookshop.addPrintEdition(magazine2);
	bookshop.addPrintEdition(magazine3);

	bookshop.addPrintEdition(book1);
	bookshop.addPrintEdition(book2);
	bookshop.addPrintEdition(book3);

	bookshop.addPrintEdition(comics1);
	bookshop.addPrintEdition(comics2);
	bookshop.addPrintEdition(comics3);

	cout << "Bookshop information before sort:" << endl;
	cout << endl;
	bookshop.showEditions();

	bookshop.removePrintEdition(magazine3);
	bookshop.removePrintEdition(book2);
	bookshop.removePrintEdition(comics1);

	cout << "Has edition: " << boolalpha << bookshop.hasEdition("Book 2") << endl;

	bookshop.sort(comparePrintEditionsByName);

	cout << endl;
	cout << "Bookshop information after sort:" << endl;
	cout << endl;
	bookshop.showEditions();

	cout << "BOOHSHOP INFORMATION: " << endl;
	cout << "BookShop total price: " << bookshop.getTotalPrice() << endl;
	cout << "Has edition: " << boolalpha << bookshop.hasEdition("Comics 1") << endl;
	cout << "Has edition: " << boolalpha << bookshop.hasEdition("Book1") << endl;
	cout << endl;

	cout << "Edition with most pages:" << endl;
	bookshop.getExtreme(comparePrintEditionsByPages).showInfo();

	return 0;
}