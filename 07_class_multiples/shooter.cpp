#include "shooter.h"

//class Shooter implementation

Roll Shooter::shoot(Die & d1, Die & d2)
{
	Roll a(d1, d2);
	a.roll();
	return a;
}



//MIDTERM 3/15