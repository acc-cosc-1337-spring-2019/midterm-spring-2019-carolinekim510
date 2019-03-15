/*
Create an instance of roll and call the friend function to output roll values
*/

#include "roll_friend.h"
#include <iostream>

int main() 
{
	Die d1, d2;
	Roll r(d1, d2);
	r.roll();
	std::cout << r;
	
	system("pause");
}


//MIDTERM 3/15