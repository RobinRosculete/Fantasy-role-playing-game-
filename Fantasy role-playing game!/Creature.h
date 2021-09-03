#ifndef CREATURE_H
#define CREATURE_H

#include<string>
#include <iostream>

using namespace std;

const int DEFAULT_STRENGHT = 10;
const int DEFAULT_HITPOINTS = 10;

class Creature {
private:
	int strenght;
	int hitpoints;
public:
	static int NUM_OBJ;
	Creature();//Default constructor
	Creature(int newStrength, int newHitpoints);

	virtual void DummyFunc() = 0;//Pure virtual Function
	virtual string GetSpecies() const { return typeid(*this).name(); }

	void SetStrenght(int newStrenght);
	void SetHitpoint(int newHitpoints);

	int GetStrenght()const { return strenght; }
	int GetHitPoints()const { return hitpoints; }
	virtual int GetDamage()const;

	virtual ~Creature() { cout << " Creature Destructor has been called! " << endl; NUM_OBJ--; }
};//End Creature Class

#endif