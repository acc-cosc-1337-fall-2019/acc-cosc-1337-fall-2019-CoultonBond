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

void display(const BankAccount & account)//exclude const to be able to modify account
{
	std::cout << "Balance: " << account.balance << "\n";
}

std::ostream & operator<<(std::ostream & out, const BankAccount & b)
{
	out << "Balance: " << b.balance << "\n";

	return out;
}

std::istream & operator >> (std::istream & in, BankAccount & b)
{
	//for tic-tac-toe
	//int  p;
	//in p;
	//t.mark_board(p);
	int amt;
	std::cout << "\nEnter amount: ";
	in >> amt;

	b.deposit(amt);

	return in;
}
