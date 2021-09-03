#ifndef BALROG_H
#define BALROG_H
#include "Demon.h"

class Balrog :public Demon {

public:
	Balrog() : Demon() { cout << "Balrog default constructor has been called!" << endl; }
	Balrog(int newStrength, int newHitpoints) :Demon(newStrength, newHitpoints) { cout << "Balrog constructor with 2 arguments has been called!" << endl; }
	void DummyFunc() { cout << "Balrog Class!" << endl; }
   int GetDamage()const override;
};//End Balrog class

#endif // !