#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "roll.h"

//write include statement for roll header

/*
Write a test case to assert that retrieving the result from a roll before
calling the foll function returns the string:

Must roll first!
*/

TEST_CASE("Test returning result")
{
	Die die1;
	Die die2;

	Roll game(die1, die2);
	game.roll();

	REQUIRE(game.result() == game.result());
}


/*
Write a test case to assert that every dice roll returns a valid result:
Craps
Natural
Point

(Loop at least 20 times and create an assert in the loop.)
*/

TEST_CASE("Test returning result in string")
{
	Die die1;
	Die die2;

	Roll game(die1, die2);
	game.roll();

}