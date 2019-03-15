//class Craps interface
#ifndef CRAPS_H
#define CRAPS_H

#include "die.h"
#include "roll.h"
#include "shooter.h"
#include <vector>

class Craps
{
public:
	void play_game();
	friend std::ostream &operator << (std::ostream & out, Craps& a);
	friend std::istream &operator >> (std::istream & in, Craps& b);

private:
	std::vector<Roll> rolls;
	std::vector<Shooter> shooters;

};


#endif // !CRAPS_H



//MIDTERM 3/15