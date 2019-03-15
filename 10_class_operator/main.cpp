#include "craps.h"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;

/*
Program runs until user opts out.

Create a Craps instance
Use overloaded cin on instance capture number of users
call play_game()
Use overloaded cout on instance-outputs vector roll result

*/
int main() 
{
	Craps play;
	cout << "How many players are playing today?:  ";
	cin >> play;
	play.play_game();
	play;
}


//MIDTERM 3/15