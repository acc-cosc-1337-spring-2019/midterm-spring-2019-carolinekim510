//Write include statement
#include "die.h"
#include <iostream>

using std::string;
using std::cout;
using std::cin;

/*
Program runs until user opts out.

For each loop Roll die and display output

*/

int main() 
{
	Die game;
	char choice;
	
	do
	{
		game.roll();
		cout << "Your die rolled: " << game.rolled_value() << "\n";
		cout << "Enter Y to roll again, any other keys to exit ";
		cin >> choice;

	} while (choice == 'y' || choice == 'Y');

}



//MIDTERM 3/15