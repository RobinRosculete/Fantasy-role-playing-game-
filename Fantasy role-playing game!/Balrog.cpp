#include "Balrog.h"

int Balrog::GetDamage()const {
	const int damage = Demon::GetDamage() + Demon::GetDamage();

	cout << "Balrog speed attack inflicts " << damage <<
		" additional damage points!" << endl;

	return damage;
}//End Getdamage Balrog function