#include "die.h"
#include <iostream>

using std::cout;

/*
Create a Die instance and copy to another Die variable. 
Explain what happens with comments in your code.
Create a reference to a Die, explain what happens with comments in your code.  
Create test cases in 08_class_copy_test.
*/

int main() 
{
	Die die1;				//Created a Die instance
	die1.roll();
	
	Die die2 = die1;		
	//die2 copies data of the instance of die1 : This value WILL NOT changed and stays as the original value of the die1.roll()
	
	Die& die3 = die1;		
	//die3 copies the memeory address of die1 : This valus WILL BE changed eveyr time the die1.roll() value changes.

}


//MIDTERM 3/15