#include<iostream>

using std::cout;

int main()
{

	int num = 5;
	int & num_ref = num; //get the address of num
	std::cout << "Address: " << &num_ref << std::endl; //output address
	std::cout << "Value at above address: " << num_ref << std::endl; //output value at 



	//point to the address of num

	int * val_ = &num_ref;

	//get the address of num

	std::cout << "Address pointed to: " << val_ << std::endl;

	//get the value pointed to by val_

	std::cout << "Value pointed to: " << *val_ << std::endl;



	*val_ = 15;

	//get the address of num

	std::cout << "Address pointed to: " << val_ << std::endl;

	//get the value pointed to by val_

	std::cout << "Value pointed to: " << *val_ << std::endl;



	return 0;

}