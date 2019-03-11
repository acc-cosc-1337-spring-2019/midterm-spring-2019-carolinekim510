#include "roll_ol.h"
//class implementation


void Roll::roll()
{
	die1.roll();
	die2.roll();

	die1_roll_value = value_1();  // value came from class Die -> to value_1 -> private variable.
	die2_roll_value = value_2();

	rolled = true;
}

void Roll::roll(Die & d1, Die & d2)
{
	d1.roll();
	d2.roll();

	die1_roll_value = d1.rolled_value;
	die2_roll_value = d2.rolled_value;

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
		return "Points";
}

int Roll::value_1()
{
	return die1.rolled_value();  // rolled_value from class Die
}

int Roll::value_2()
{
	return die2.rolled_value(); // rolled_value from class Die
}

bool Roll::craps()
{
	if (die1_roll_value + die2_roll_value == 2 || die1_roll_value + die2_roll_value == 3 || die1_roll_value + die2_roll_value == 12)
	{
		return true;
	}
	else
		return false;
}

bool Roll::natural()
{
	if (die1_roll_value + die2_roll_value == 7 || die1_roll_value + die2_roll_value == 11)
	{
		return true;
	}
	else
		return false;
}
