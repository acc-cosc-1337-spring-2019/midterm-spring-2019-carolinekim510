#include "shooter.h"
#include "roll_ol.h"
#include "die.h"
#include <string>
#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::string;

/*
Program runs until user opts out.
Create two Die instances, a Shooter instance, and a vector of Roll objects.
Create a loop that allows user to shoot 10 times and add each roll created by 
Shooter shoot() function into vector of Roll.

In another loop iterate the vector of Roll and dislplay the Roll result.
*/

int main()
{
	int choice;

	Die d1;
	Die d2;
	Shooter shoot;
	std::vector<Roll> vr;

	do
	{
		for (int i = 0; i < 10; i++)
		{
			Roll game = shoot.shoot(d1, d2);
			vr.push_back(game);
		}

		for (auto a : vr)
		{
			cout << "Die1: " << a.value_1() << "\t" << "Die2: "<< a.value_2() << "\n";
			cout << "Roll results: " << a.result() << "\n\n";
		}

		cout << "Enter 1 to play again, any other to exit ";
		cin >> choice;

	} while (choice == 1);

}


//MIDTERM 3/15