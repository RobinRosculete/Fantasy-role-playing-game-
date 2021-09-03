#ifndef ELF_H
#define ELF_H
#include "Creature.h"

class Elf : public  Creature {

public:
	Elf() :Creature() { cout << "Elf default constructor has been called!" << endl; }//Elf Default constructor
	Elf(int newStrength, int newHitpoints) :Creature(newStrength, newHitpoints) { cout << "Elf constructor with 2 arguments has been called!" << endl; };
   int GetDamage()const override;
   void DummyFunc() { cout << "Elf Class!" << endl; }
};//End Elf Class

#endif 

