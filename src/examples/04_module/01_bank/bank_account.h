//bank_account.h
class BankAccount
{
public:
	BankAccount();//constructor, same name as class
	BankAccount(int b) : balance(b) {}; //inline constructor
	void deposit(int amount);
	void withdraw(int amount); 
	int get_balance() const;//const makes class members read only


private:
	int balance;//balance is not accessible from outside the BankAccount class


};