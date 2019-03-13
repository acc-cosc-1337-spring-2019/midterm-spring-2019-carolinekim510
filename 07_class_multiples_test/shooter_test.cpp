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

/*
TEST_CASE("Test shooter returns a roll and a result")
{
	Die die1;
	Die die2;
	Roll shoot(Die & d1, Die & d2);

	for (int i = 0; i < 20; i++)
	{
		g.roll();
		if (g.value_1() + g.value_2() == 2 || g.value_1() + g.value_2() == 3 || g.value_1() + g.value_2() == 12)
		{
			REQUIRE(g.result() == "Craps");
		}
		else if (g.value_1() + g.value_2() == 7 || g.value_1() + g.value_2() == 11)
		{
			REQUIRE(g.result() == "Natural");
		}
		else
			REQUIRE(g.result() == "Points");

	}
}

*/