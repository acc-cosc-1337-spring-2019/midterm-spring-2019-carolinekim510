//write include statement
#include "fibonacci.h"
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::cin;

/*
Program runs until user opts out.
Prompt user for a number and display the fibonacci series for the number
*/
int main() 
{
	char choice;
	string a;
	
	do
	{
		cout << "Enter a word: ";
		cin >> a;
		cout << "Your Fibonacci counts: " << get_fibonacci(a);

		cout << "\nEnter Y to play again, any other key to exit ";
		cin >> choice;

	} while (choice == 'y' || choice == 'Y');

}