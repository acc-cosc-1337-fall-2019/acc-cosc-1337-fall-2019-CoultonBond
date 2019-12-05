//constructor use for loop to initialize account to increments of 10 balance (5 times)
//display iterate and display array
//free memory using a loop to delete an nullify

#include<iostream>
#include "bank_account.h"
//
//default constructor create dyanamic array of 5 Bank accounts
//display function iterate with an indexed for and display balance
//destructor free memory

class MyReport
{
public:
	MyReport();
	void display()const;
	~MyReport();//deconstructor
private:
	BankAccount** accounts;//pointer to a pointer
	const int SIZE{ 5 };
};


MyReport::MyReport()//constructor
{
	accounts = new BankAccount*[SIZE];
	std::cout << "Create memory\n";
	for (int i = 0; i < SIZE; ++i)
	{
		accounts[i] = new BankAcount(i * 10); //calls default constructor
	}

	void MyReport::display() const
	{
		std::cout << "process\n";
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
