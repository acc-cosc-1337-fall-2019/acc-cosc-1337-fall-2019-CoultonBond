//
#include "report.h"
#include<iostream>

MyReport::MyReport()//constructor
	: accounts{new BankAcccount*[SIZE]}//save 5 memory addresses
{
	for (int i = 0; i < SIZE; ++i)
	{
		accounts[i] = new BankAcount(i * 10); //calls default constructor
	}

void MyReport::display() const
{
	for (int i = 0; i < SIZE; ++i)
	{
		std::cout << accounts[i]->get_balance() << "\n";
	}
}

MyReport::~MyReport()
{
	for (int i = 0; i < SIZE; ++i)
	{
		delete acounts[i];
	}
	delete[] accounts;
}
