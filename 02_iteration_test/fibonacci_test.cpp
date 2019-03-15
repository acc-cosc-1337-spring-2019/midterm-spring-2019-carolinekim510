#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "fibonacci.h"
#include <string>
//write include statement for fibonacci header

TEST_CASE("Test configuration setup")
{
	REQUIRE(true == true);
}

/*
Write test case for get fibonacci function with values 10 and 100
*/

TEST_CASE("Test get fibonacci")
{
	REQUIRE(get_fibonacci("superman") == 13);
	REQUIRE(get_fibonacci("carolinekim") == 55);
	REQUIRE(get_fibonacci("flower") == 5);
}


//MIDTERM 3/15