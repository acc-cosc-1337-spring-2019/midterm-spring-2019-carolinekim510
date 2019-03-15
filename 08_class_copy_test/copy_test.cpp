#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "die.h"


//Create a test case that shows that a copy of Die are not the same
//objects in memory


TEST_CASE("Test to show a copy of Die are not same")
{
	Die die1;				//Created a Die instance
	die1.roll();
	int die1_g = die1.rolled_value();

	Die die2 = die1;
	//die2 copies data of the instance of die1 : This value WILL NOT changed and stays as the original value of the die1.roll()

	Die& die3 = die1;
	//die3 copies the memeory address of die1 : This valus WILL BE changed eveyr time the die1.roll() value changes.

	REQUIRE(die2.rolled_value() == die1_g);

	REQUIRE(&die3 == &die1);	//Will print same address where data is stored.
	REQUIRE(die3.rolled_value() == die1_g);
}


//MIDTERM 3/15