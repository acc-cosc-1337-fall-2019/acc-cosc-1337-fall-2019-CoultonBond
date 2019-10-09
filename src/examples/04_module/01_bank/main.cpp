#include<iostream>
#include<vector>
#include "atm.h"
#include "bank_account.h"

using std::cin;
using std::cout;
using std::vector;

int main()
{
	BankAccount a;//causes constructor to execute in bank_account.cpp
	BankAccount b = a;//creates copy  
	display(a);//call friend function, must be in the class but not part of the class
	//scan card and enter pin
	//get customer records from database into a vector
	vector<BankAccount> accounts{ BankAccount(500), BankAccount(600), BankAccount(1000) };
	BankAccount account(9000);

	ATM atm(accounts[0]);
	atm.deposit(100);
	atm.withdraw(50);
	atm.display_balance();
	cin >> a;
	cout << a; //overload operator concept, function call behind the scenes

	return 0;
}