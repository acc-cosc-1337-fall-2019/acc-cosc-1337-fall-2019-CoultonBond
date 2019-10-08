//bank_account.h
#ifndef BANK_ACCOUNT_H//header guards: prevent class redefinition error, need to use in tic-tac-toe
#define BANK_ACCOUNT_H
class BankAccount
{
public:
	BankAccount();//default constructor, same name as class
	BankAccount(int b) : balance(b) {}; //inline constructor, parameters causes overloading
	void deposit(int amount);
	void withdraw(int amount); 
	int get_balance() const;//const makes class members read only


private:
	int balance;//balance is not accessible from outside the BankAccount class


};
#endif