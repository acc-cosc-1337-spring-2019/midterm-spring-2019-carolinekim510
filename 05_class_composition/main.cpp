#include "die.h"
#include "roll.h"
#include <vector>
#include <iostream>

using std::vector;
using std::cout;
/*
Create two Die instances.
Create a vector of Roll
Create a 20iteration loop and create a Roll instance, call roll function, 
output rolled values, and add to vector.

Loop through vector of Roll and output roll result
*/
int main() 
{
	Die die1;
	Die die2;
	vector<Roll> vecRoll;
	
	for (int i = 0; i < 20; i++)
	{
		Roll game(die1, die2);
		game.roll();
		cout << "\n#1 Die: " << game.value_1() << " " << "#2 Die: " << game.value_2() << "\n";
		vecRoll.push_back(game);
		cout << "Dice roll result: " << game.result() << "\n";
	}

}