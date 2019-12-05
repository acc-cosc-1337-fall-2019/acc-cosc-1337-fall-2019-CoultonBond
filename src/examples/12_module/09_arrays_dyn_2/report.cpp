//
#include "report.h"
#include<iostream>

Report::Report()//constructor
{
	accounts = new BankAccount[SIZE];//calls default constructor & creates dynamic memory(heap memory)
}

void Report::display() const
{
	for (int i = 0; i < SIZE; ++i)
	{
		std::cout<< accounts[i].get_balance() << "\n";
	}
}

Report::~Report()
{
	delete[] accounts;
}
