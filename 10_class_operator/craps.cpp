//class Craps implementation

#include "craps.h"
#include <vector>

void Craps::play_game()
{
	Die d1;
	Die d2;
	Shooter s;
	Roll& game = s.shoot(d1, d2);
	std::vector<Roll> rolls;		//vector of keeping the roll scores
	rolls.push_back(game);			//pushes all the game to roll vector (SCORE)
	bool isWon = false;

	// *** FIRST phase of the game
	if (game.result() == "Natural")		//checks if the roll is either 7 or 11
	{
		//cout << WINS;
	}
	else if (game.result() == "Craps")
	{
		rolls.push_back(game);
		shooters.push_back(s.shoot);
		//cout << looses;
	}
	else
	{
		// **** SECOND phase of the game
		game.result() == "Points";
		game;
		while (isWon == false)
		{
			if (game.result() == "Points")
			{
				rolls.push_back(game);
				shooters.push_back(s.shoot);
				//cout << wins;
				isWon = true;
			}
			else if (game.value_1 + game.value_2 == 7)
			{
				rolls.push_back(game);
				shooters.push_back(s.shoot);
				//cout << loose;
				isWon = true;
			}
		}
	}
}

std::ostream & operator<<(std::ostream & out, Craps & a)
{
	for (auto v : a.rolls)
	{
		out << v.result() << "\n";
	}
	return out;
}

std::istream & operator>>(std::istream & in, Craps & b)
{
	// User from main enters how many players are playing and pushes to the Shooters vector.
	Shooter user;
	b.shooters.push_back(user);
}



//MIDTERM 3/15