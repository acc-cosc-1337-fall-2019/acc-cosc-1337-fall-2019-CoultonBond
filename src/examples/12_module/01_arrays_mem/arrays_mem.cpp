#include "arrays_mem.h"
#include<iostream>
//write code for for stack_array and display each element to screen

void stack_array()
{
	const int SIZE = 5;
	int hours[SIZE] = { 5, 10, 30, 20, 7 };
	hours[0] = 50;//access and modify

	//iterate an array
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << hours[i] << "\n";
	}

	std::cout << "\n";

	//itterate w for ranged
	for (auto hour : hours)//must use reference to modify original array, example does not
	{
		std::cout << hour << "\n";
	}
	std::cout << "\n";

	//pointer to first hours array element
	int* first_element = hours;
	std::cout << "first element: " << *first_element << "\n";
	std::cout << "second element: " << *(first_element + 1) << "\n";
	*first_element++;
	*first_element++;
	std::cout << "third element: " << *first_element++ << "\n";
	*first_element--;
	std::cout << "third element: " << *first_element-- << "\n\n";

	int* hours_ptr = hours;
	//iterate array with a pointer forward
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << *hours_ptr << "\n";
		hours_ptr++;
	}

	//itterate array pointer backwards
	for (int i = 0; i < SIZE; i++)
	{
		hours_ptr--;
		std::cout << *hours_ptr << "\n";
	}
}
