#include "fibonacci.h"
#include <string>

/*
Write prototype for string value - return function get_fibonacci with an int
parameter that returns the fibonacci sequence up to that number.

DO NOT USE A RECURSIVE FUNCTION
*/

int get_fibonacci(std::string str)
{
	int first = 0, second = 1, third;

	for (int i = 0; i < str.length()-1; i++)
	{
		if (i == 0)
			0;
		else
		{
			third = first + second;
			first = second;
			second = third;
		}	
	}
	return third;
}