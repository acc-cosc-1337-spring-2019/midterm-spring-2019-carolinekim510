//roll class implementation
#include "roll.h"
#include <string>

void Roll::roll()
{
	die1.roll();
	die2.roll();

	die1_roll_value = die1.rolled_value();  //die에서 넘어온값이 die1_roll_value로 바뀜
	die2_roll_value = die2.rolled_value();

	rolled = true;
}

std::string Roll::result()
{
	if (craps() == true)
	{
		return "Craps";
	}
	else if (natural() == true)
	{
		return "Natural";
	}
	else
	{
		return "Points";
	}
		
}

int Roll::value_1()
{
	return die1_roll_value;  
}

int Roll::value_2()
{
	return die2_roll_value;
}

bool Roll::craps()
{
	if (die1.rolled_value() + die2.rolled_value() == 2 || die1.rolled_value() + die2.rolled_value() == 3 || die1.rolled_value() + die2.rolled_value() == 12)
	{
		return true;
	}
	else
		return false;
}

bool Roll::natural()
{
	if (die1.rolled_value() + die2.rolled_value() == 7 || die1.rolled_value() + die2.rolled_value() == 11)
	{
		return true;
	}
	else
		return false;
}

