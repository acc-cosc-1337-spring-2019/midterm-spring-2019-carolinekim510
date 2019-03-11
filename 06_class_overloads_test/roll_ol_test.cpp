#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "roll_ol.h"

/*
Test the overloaded function to make sure roll's produce a valid result:
Craps
Natural
Point

Create Loop of at least 20 iterations
*/

TEST_CASE("Test to see roll's vaolid result")
{
	for (int i = 0; i < 20; i++)
	{
		Die d1;
		Die d2;

		Roll game(d1, d2);
		game.roll(d1, d2);
		if (game.result() == "Craps")
			REQUIRE(game.result() == "Craps");
		else if (game.result() == "Natural")
			REQUIRE(game.result() == "Natural");
		else
			REQUIRE(game.result() == "Points");

	}
}