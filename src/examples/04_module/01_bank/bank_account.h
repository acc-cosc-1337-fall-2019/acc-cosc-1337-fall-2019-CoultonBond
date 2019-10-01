//bank_account.h
class BankAccount
{
public:
	BankAccount();//constructor, same name as class
	void deposit(int amount);
	int get_balance();


private:
	int balance;//balance is not accessible from outside class


};