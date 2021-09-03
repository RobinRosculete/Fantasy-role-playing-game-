#include "Elf.h"

//Function purpose to return damage of Elf atack
int Elf::GetDamage()const {

	int damage = Creature::GetDamage();
	const int multiplyDamage = 2;

	if ((rand() % 100) <= 10)
	{
		damage *= multiplyDamage;
		cout << "Magical Elf attack inflicts " << damage <<
			" additional damage points!" << endl;
	}
	return damage;
}//End Function GetDamge elf!