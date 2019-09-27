//write include statements
#include<iostream>
#include<string>
#include "dna.h"

//write using statements
using std::string;
using std::cin;
using std::cout;


/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	string choice = "y";
	while (choice == "y" || choice == "Y")
	{
		string DNA = "";
		cout << "Enter a DNA string: ";
		cin >> DNA;

		int menu = 0;
		cout << "Do you want to get the GC-content or the DNA complement? (Enter 1 for GC-content, 2 for DNA complement): ";
		cin >> menu;

		switch (menu)
		{
		case 1:
			cout << "The GC-content of " << DNA << " is " << get_gc_content(DNA) << "\n";
			break;
		case 2:
			cout << "The DNA complement of " << DNA << " is " << get_dna_complement(DNA) << "\n";
			break;
		default:
			cout << "Invalid input.\n";
		}
		cout << "Enter y to find the GC-content or DNA complement of a different DNA string: ";
		cin >> choice;

	}
}