#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "roll.h"
#include <iostream>

//write include statement for roll header

/*
Write a test case to assert that retrieving the result from a roll before
calling the foll function returns the string:

Must roll first!
*/


TEST_CASE("Test to check before returning result")
{
	Die die1;
	Die die2;
	Roll g(die1, die2);

	// Warns to roll the dice first before asks the result.
	REQUIRE("Must Roll FIRST!");

	// Roll the dice
	g.roll();
	g.result();

}





/*
Write a test case to assert that every dice roll returns a valid result:
Craps
Natural
Point

(Loop at least 20 times and create an assert in the loop.)
*/


TEST_CASE("Test to check returning valid result")
{
	Die die1;
	Die die2;
	Roll g(die1, die2);

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


