//atm.h
#ifndef ATM_H
#define ATM_H
#include "bank_account.h"
class ATM 
{
public:
	ATM(BankAccount a);
	void deposit(int amount);
	void withdraw(int amount);
	void display_balance()const;//constant so value is not changed


private:
	BankAccount account;//inaccessible from outside class
};
#endif