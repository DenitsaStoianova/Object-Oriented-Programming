// Task04-TicketsVector.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Ticket.h"
#include "EconomicTicket.h"
#include "BusinessTicket.h"
#include "Train.h"
using namespace std;

int main()
{
	Ticket* et1 = new EconomicTicket("E1", 1, 5.75, 10.23, true);
	Ticket* et2 = new EconomicTicket("E3", 3, 5.75, 5.25, false);
	Ticket* et3 = new EconomicTicket("E5", 5, 5.75, 6.35, true);
	Ticket* et4 = new EconomicTicket("E7", 7, 4.25, 10.25, false);

	Ticket* bt1 = new BusinessTicket("B2", 2, 11.25, 10.23, 4);
	Ticket* bt2 = new BusinessTicket("B4", 4, 4.25, 4.90, 3);
	Ticket* bt3 = new BusinessTicket("B6", 6, 6.30, 4.00, 2);
	Ticket* bt4 = new BusinessTicket("B8", 8, 2.30, 7.50, 1);


	Train train;

	train.addTicket(et1);
	train.addTicket(et2);
	train.addTicket(et3);
	train.addTicket(et4);

	train.removeTicket(et1);

	train.print();

	return 0;
}
