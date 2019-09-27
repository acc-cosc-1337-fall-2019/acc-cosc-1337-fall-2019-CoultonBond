#include "dna.h"
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content(const string DNA)
{
	int DNA_length = DNA.size(); 
	string symbol = "";
	double count = 0;

	for (int i = 0; i < DNA_length; i++)
	{
		symbol = DNA.at(i);
		if (symbol == "G" || symbol == "C")
		{
			count++;
		}
	}
	double GC_content = count / DNA_length;
	return GC_content;
}



/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
string get_reverse_string(string DNA_reversed)
{
	int DNA_length = DNA_reversed.size() - 1; 
	string reversed = "";

	for (int i = DNA_length; i >= 0; i--)
	{
		reversed = reversed + DNA_reversed.at(i);
	}
	return reversed; 
}



/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/
string get_dna_complement(string DNA_complement)
{
	string reversed = get_reverse_string(DNA_complement); 
	string complemented = "";
	for (int i = 0; i < reversed.size(); i++)
	{
		if (reversed.at(i) == 'A')
		{
			complemented = complemented + 'T';
		}
		else if (reversed.at(i) == 'T')
		{
			complemented = complemented + 'A';
		}
		else if (reversed.at(i) == 'C')
		{
			complemented = complemented + 'G';
		}
		else if (reversed.at(i) == 'G')
		{
			complemented = complemented + 'C';
		}
	}
	return complemented;
	
}
