#include "decisions.h"
//write include statement for decisions header

//Write code for function get_grade_points that accepts a string letter_grade and returns 
//the grade_points for as follows:
//given grade "A" returns 4
//given grade "B" returns 3
//given grade "C" returns 2
//given grade "D" returns 1
//given grade "F" returns 0
//another other value return -1
int get_grade_points(std::string letter_grade)
{
	if (letter_grade == "A") 
	{
		return 4;
	}
	else if(letter_grade == "B") 
	{
		return 3;
	}
	else if (letter_grade == "C")
	{
		return 2;
	}
	else if (letter_grade == "D")
	{
		return 1;
	}
	else if (letter_grade == "F")
	{
		return 0;
	}
	else 
	{
		return -1;
	}
}


//Write code for function calculate_gpa that accepts an int named credit_hours and
//a double named credit_points.  The function returns the quotient of credit_points divided by
//credit_hours. In the function account for division by zero by returning a -1.
double calculate_gpa(int credit_hours, double credit_points)
{
	if (credit_hours == 0)
	{
		return -1; 
	}
	else
	{
		return credit_points / credit_hours;
	}
}


//homework 3 
string get_letter_grade_using_if(int grade)
{
	if (grade >= 90 && grade <= 100)
	{
		return "A";
	}
	else if (grade >= 80 && grade <= 89)
	{
		return "B";
	}
	else if (grade >= 70 && grade <= 79)
	{
		return "C";
	}
	else if (grade >= 60 && grade <= 69)
	{
		return "D";
	}
	else if (grade >= 00 && grade <= 59)
		return "F";
	else
		return "Invalid";
}

string get_letter_grade_using_switch(int grade)
{
	switch (grade)
	{
	case 100:
		return "A";
	case 99:
		return "A";
	case 98:
		return "A";
	case 97:
		return "A";
	case 96:
		return "A";
	case 95:
		return "A";
	case 94:
		return "A";
	case 93:
		return "A";
	case 92:
		return "A";
	case 91:
		return "A";
	case 90:
		return "A";
	case 89:
		return "B";
	case 88:
		return "B";
	case 87:
		return "B";
	case 86:
		return "B";
	case 85:
		return "B";
	case 84:
		return "B";
	case 83:
		return "B";
	case 82:
		return "B";
	case 81:
		return "B";
	case 80:
		return "B";
	case 79:
		return "C";
	case 78:
		return "C";
	case 77:
		return "C";
	case 76:
		return "C";
	case 75:
		return "C";
	case 74:
		return "C";
	case 73:
		return "C";
	case 72:
		return "C";
	case 71:
		return "C";
	case 70:
		return "C";
	case 69:
		return "D";
	case 68:
		return "D";
	case 67:
		return "D";
	case 66:
		return "D";
	case 65:
		return "D";
	case 64:
		return "D";
	case 63:
		return "D";
	case 62:
		return "D";
	case 61:
		return "D";
	case 60:
		return "D";
	case 59:
		return "F";
	case 58:
		return "F";
	case 57:
		return "F";
	case 56:
		return "F";
	case 55:
		return "F";
	case 54:
		return "F";
	case 53:
		return "F";
	case 52:
		return "F";
	case 51:
		return "F";
	case 50:
		return "F";
	case 49:
		return "F";
	case 48:
		return "F";
	case 47:
		return "F";
	case 46:
		return "F";
	case 45:
		return "F";
	case 44:
		return "F";
	case 43:
		return "F";
	case 42:
		return "F";
	case 41:
		return "F";
	case 40:
		return "F";
	case 39:
		return "F";
	case 38:
		return "F";
	case 37:
		return "F";
	case 36:
		return "F";
	case 35:
		return "F";
	case 34:
		return "F";
	case 33:
		return "F";
	case 32:
		return "F";
	case 31:
		return "F";
	case 30:
		return "F";
	case 29:
		return "F";
	case 28:
		return "F";
	case 27:
		return "F";
	case 26:
		return "F";
	case 25:
		return "F";
	case 24:
		return "F";
	case 23:
		return "F";
	case 22:
		return "F";
	case 21:
		return "F";
	case 20:
		return "F";
	case 19:
		return "F";
	case 18:
		return "F";
	case 17:
		return "F";
	case 16:
		return "F";
	case 15:
		return "F";
	case 14:
		return "F";
	case 13:
		return "F";
	case 12:
		return "F";
	case 11:
	case 10:
		return "F";
	case 9:
		return "F";
	case 8:
		return "F";
	case 7:
		return "F";
	case 6:
		return "F";
	case 5:
		return "F";
	case 4:
		return "F";
	case 3:
		return "F";
	case 2:
		return "F";
	case 1:
		return "F";
	case 0:
		return "F";
	default:
		return "Invalid";
	}
}
