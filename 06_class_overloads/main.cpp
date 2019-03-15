#include "die.h"
#include "roll_ol.h"
#include <vector>
#include <iostream>

using std::vector;
using std::cout;

/*
Create two Die instances.
Create a vector of Roll
Create a 20iteration loop and create a Roll instance, call roll OVERLOADED function,
output rolled values, and add to vector.

Loop through vector of Roll and output roll result
*/

int main() 
{
	Die die1;
	Die die2;
	vector<Roll> vecRoll2;

	for (int i = 0; i < 20; i++)
	{
		Roll g(die1, die2);
		g.roll(die1, die2);
		cout << "\n#1 Die: " << g.value_1() << " " << "#2 Die: " << g.value_2() << "\n";
		vecRoll2.push_back(g);
		cout << "Dice roll result: " << g.result() << "\n";
	}


}


//MIDTERM 3/15