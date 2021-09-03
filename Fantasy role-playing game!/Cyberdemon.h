#ifndef CYBERDEMON_H
#define CYBERDEMON_H
#include "Demon.h"

class Cyberdemon :public Demon {
public:
	Cyberdemon() :Demon() { cout << "Cyberemon default constructor has been called!" << endl; }//Default constructor
	Cyberdemon(int newStrength, int newHitpoints) :Demon(newStrength, newHitpoints) { cout << "Cyberemon constructor with 2 arguments has been called!" << endl; }
	void DummyFunc() { cout << "CyberDemon Class!" << endl; }
};//End CyberDemon Class


#endif // !CYBERDEMON_H
