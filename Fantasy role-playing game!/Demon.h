#ifndef DEMON_H
#define DEMON_H
#include "Creature.h"

class Demon : public Creature {
public:
	Demon() :Creature() { cout << "Demon Default constructor has been called" << endl; } //Default Demon Constructor, calling Default Creature constructor
	Demon(int newStrength, int newHitpoints) :Creature(newStrength, newHitpoints) { cout << "Demon constructor with 2 arguments has been called!" << endl; }
	int GetDamage()const override;

	void DummyFunc() { cout << "Demon Class!" << endl; }

	virtual ~Demon(){ cout << " Demon Destructor has been called! " << endl; }

};//End Demon class

#endif 

