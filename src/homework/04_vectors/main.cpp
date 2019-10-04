#include<iostream>
#include<vectors.h>

using std::cin;
using std::cout;
using std::string;
using std::vector;
/*
use a vector of int with values 8, 4, 20, 88, 66, 99

Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
int main() 
{
	vector<int> myVector = { 8, 4, 20, 88, 66, 99 };

	string choice = "y";
	while (choice == "y" || choice == "Y")
	{

		int menu = 0;
		vector<int> prime_values;

		cout << "Do you want to get the max value from the vector or a list of primes? (Enter 1 to get max, 2 to get primes): ";
		cin >> menu;

		switch (menu)
		{
		case 1:
			cout << "The max of the vector" << " is " << get_max_from_vector(myVector) << "\n";
			break;
		case 2:
			int number;
			cout << "Enter a number to get its primes: ";
			cin >> number;
			prime_values = vector_of_primes(number);
			cout << "The prime numbers of " << number << " are: "; 

			for (auto num : prime_values)
			{
				cout << num << " ";
			}
			break;

		default:
			cout << "Invalid input.\n";
		}
		cout << "\n" << "Enter y to repeat: ";
		cin >> choice;

	}
}