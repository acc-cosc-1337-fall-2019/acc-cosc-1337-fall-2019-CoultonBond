#include "vectors.h"
/*
Write a value return function get_max_from_vector with a const reference 
vector of intsparameter that returns the max value in a vector

@param numbers is a const reference to a vector of integers
@return the max value in the vector
*/

int get_max_from_vector(const std::vector<int> numbers)
{
	int max = 0;

	for (int i = 0; i < numbers.size(); i++)
	{
		if (max < numbers[i])
		{
			max = numbers[i];
		}
	}
	return max;
}

/*
Write a function named is_prime with an integer parameter that
given a number returns true if prime or false if not prime

@param number: Any whole number
@return: bool if prime False if not
*/

bool is_prime(int number)
{
	if (number == 2)
	{
		return true;
	}
	if (number < 2 || number % 2 == 0) //modulus operator(%) gives remainder of number divided by 2
	{
		return false;//returns false if number is negative, 0, 1 or even
	}

	for (int i = 3; (i*i) <= number; i += 2)
	{
		if (number % i == 0)
		{
			return false;
		}
	}
	return true; 

}

/*
Write a a function named vector_of_primes with an integer parameter
that given a number returns all the prime numbers up to the number

Example given number 10 returns a vector with elements 2,3,5,7,

@param int integer value
@return vector of ints containing prime values up to a value

Make sure to use the is_prime function to determine if current 
number is prime.
*/

vector<int> vector_of_primes(int number)
{
	vector<int> prime_values;

	for (int i = 2; i < number; i++)
	{
		if (is_prime(i) == true)
		{
			prime_values.push_back(i);
		}
	}
	return prime_values;
}

