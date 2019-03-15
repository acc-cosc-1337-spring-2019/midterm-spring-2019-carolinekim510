//class RollFriend interface

#include "die.h"
#include <string>
#include <iostream>

//Roll class interface
#ifndef ROLL_FRIEND_H
#define ROLL_FRIEND_H


class Roll
{
public:
	Roll(Die& d1, Die& d2) : die1(d1), die2(d2) {};		//die1, die2, ¶ó´Â object¸¦ ¸¸µë
	void roll();
	std::string result();
	int value_1();
	int value_2();
	friend std::ostream & operator << (std::ostream & out, const Roll & r);

private:
	Die& die1;
	Die& die2;
	int die1_roll_value;
	int die2_roll_value;
	bool rolled = false;
	bool craps();
	bool natural();

};

#endif // !ROLL_FRIEND_H




//MIDTERM 3/15