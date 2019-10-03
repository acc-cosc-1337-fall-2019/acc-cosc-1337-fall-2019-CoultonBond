#include "bank_account.h"

//bank_account.cpp
BankAccount::BankAccount()//constructor, special function
{
	//code to read balance from database
	balance = 500;
}

void BankAccount::deposit(int amount)
{
	if (amount > 0)
	{
		balance += amount; //balance = balance + amount; same code 
	}
}

void BankAccount::withdraw(int amount)
{
	if (balance > amount)
	{
		balance -= amount;//balance = balance - amount; same code
	}
}

int BankAccount::get_balance() const // makes balance read only, unmodifiable
{
	return balance;
}
