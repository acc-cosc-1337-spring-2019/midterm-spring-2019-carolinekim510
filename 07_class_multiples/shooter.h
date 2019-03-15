//class Shooter interface
#include "die.h"
#include "roll_ol.h"

#ifndef SHOOTER_H
#define SHOOTER_H

class Shooter
{
public:
	Roll shoot(Die& d1, Die& d2);
};

#endif // !SHOOTER_H



//MIDTERM 3/15