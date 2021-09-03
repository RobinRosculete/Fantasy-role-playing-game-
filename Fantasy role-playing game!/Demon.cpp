#include "Demon.h"

//Function purpose to return damage of demonic atack!
int Demon::GetDamage()const {
	int damage = Creature::GetDamage();
	const int addDamage = 50;

	if ((rand() % 100) <= 5)
	{
		damage += addDamage;
		cout << "Demonic attack inflicts " << addDamage << "  additional damage points!" << endl;
	}
	return damage;
}//end Demon GetDamage()