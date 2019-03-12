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


TEST_CASE("Test to check returning valid result: Overloaded function")
{
	Die d1;
	Die d2;
	Roll g(d1, d2);

	for (int i = 0; i < 20; i++)
	{
		g.roll(d1, d2);
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


