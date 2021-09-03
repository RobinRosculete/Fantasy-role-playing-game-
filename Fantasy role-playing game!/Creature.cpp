#include "Creature.h"

Creature:: Creature() :strenght(DEFAULT_STRENGHT), hitpoints(DEFAULT_HITPOINTS) { 
	
cout << "Creture Default constructor has been called" << endl; 	
NUM_OBJ++;
}//End Default constructor definition


//Costructor with two arguments, seting strength and Hipoints
Creature::Creature(int newStrength, int newHitpoints)
{

	cout << " Creature Constructor with two argument has been called! " << endl;
	if (newStrength <= 0 || newHitpoints <= 0)//Error checking 
	{
		cout << "Error! Strenght and Hitpoints can't be < 0 :(Seting Strenght and Hitpoints to default) " << endl;
		this->strenght = DEFAULT_STRENGHT;
		this->hitpoints = DEFAULT_HITPOINTS;;
	}
	else {
		this->strenght = newStrength;
		this->hitpoints = newHitpoints;
	}
	NUM_OBJ++;
}

//Seting strenght for a creature
void Creature::SetStrenght(int newStrenght) {

	if (newStrenght <= 0)//Error checking 
	{
		cout << "Error! Strenght can't be < 0 :(Seting Strenght to default) " << endl;
		this->strenght = DEFAULT_STRENGHT;
	}
	else {
		this->strenght = newStrenght;
	}
}

//Seting hitpoints for a creature
void Creature::SetHitpoint(int newHitpoints)
{
	
	if (newHitpoints <= 0) //Error checking
	{
		cout << "Error! Hitpoints can't be < 0 :(Seting Hitpoints to default) " << endl;
		this->hitpoints = DEFAULT_HITPOINTS;
	}
	else {
		this->hitpoints = newHitpoints;
	}

}

//Function Purpose to return Creature damage
 int Creature::GetDamage()const {
	return (rand() % strenght) + 1;
}//End Creatur GetDamage();