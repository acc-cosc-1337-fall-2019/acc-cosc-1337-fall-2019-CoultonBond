#include "atm.h"
#include<iostream>
//atm.cpp
using std::cout;

ATM::ATM(BankAccount a) :account(a)//creates copy of BankAccount in account, called copy constructor
{

}

void ATM::deposit(int amount)
{
	account.deposit(amount);
}

void ATM::withdraw(int amount)
{
	account.withdraw(amount);
}

void ATM::display_balance() const//bank account cannot be changed
{
	cout << "Balance: " << account.get_balance()<< "\n";
}
