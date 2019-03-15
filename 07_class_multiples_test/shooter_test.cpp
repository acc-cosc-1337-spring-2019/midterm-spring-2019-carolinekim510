#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "shooter.h"

/*
Test that shooter returns a Roll and verify that the roll result has one 
of the following values:
Natural
Craps
Point

*/


TEST_CASE("Test shooter returns a roll and a result")
{
	Die die1;
	Die die2;
	Shooter a;
	Roll g = a.shoot(die1, die2);

	for (int i = 0; i < 20; i++)
	{
		if (g.result() == "Natural")
		{
			REQUIRE(g.result() == "Natural");
		}
		else if (g.result() == "Craps")
		{
			REQUIRE(g.result() == "Craps");
		}
		else 
			REQUIRE(g.result() == "Points");

	}
}



//MIDTERM 3/15