#ifndef HUMAN_H
#define HUMAN_H
#include"Creature.h"

class Human : public Creature{
public:
	Human() :Creature() { cout << "Human default constructor has been callled!" << endl; }
	Human(int newStrength, int newHitpoints) :Creature(newStrength, newHitpoints) { cout << "Human  constructor with 2 arguments has been callled!" << endl; };
	void DummyFunc() { cout << "Human Class!" << endl; }
};//End Fuman Class;

#endif // !HUMAN_H

