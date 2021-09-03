
#include <iostream>
#include"Human.h"
#include"Elf.h"
#include"Balrog.h"
#include"Cyberdemon.h"
const int ARRAY_SIZE = 5;
int Creature::NUM_OBJ = 0;
void DealocateMem(Creature* creatureArray[]);

using namespace std;
int main() {
	int y = 0;
	int deletedObj = 0;
	Creature* creatureArray[ARRAY_SIZE] = { nullptr };
	
	//Testing Program
	try {
		creatureArray[y] = new Human(99,45);
		creatureArray[++y] = new Elf(20, 30);
		creatureArray[++y] = new Demon(50, 20);
		creatureArray[++y] = new Balrog(100, 56);
		creatureArray[++y] = new Cyberdemon(39, 56);

		cout << endl;
		//Testing GetSpecies and GetDamage
		for (int i = 0; i < ARRAY_SIZE; i++) {
			cout << creatureArray[i]->GetSpecies() << "\t"
				<< "Strenght:" << creatureArray[i]->GetStrenght() << "\t"
				<< "HitPoints: " << creatureArray[i]->GetHitPoints() << "\t"
				<< "Damage:" << creatureArray[i]->GetDamage() << endl;
		}

		cout << "\nNumber of objects: " << Creature::NUM_OBJ << endl;
	}
	catch (bad_alloc&ex) {
		cout << "Exception: " << ex.what() << endl;
		DealocateMem(creatureArray);
	}
	DealocateMem(creatureArray);
	cout << "Number of objects after Dealocation: " << Creature::NUM_OBJ << endl;
}//End Main

//Fraction Purpose to Dealocate Memory
void DealocateMem(Creature* creatureArray[])
{
	int deletedOBj = 0;

	for (int x = 0; x < ARRAY_SIZE; x++) {

		if (creatureArray[x] != nullptr) {
			delete creatureArray[x];
			creatureArray[x] = nullptr;
			deletedOBj++;
		}
	}

	cout << "Objects Deleted: " << deletedOBj << endl;
}// End DealocateMe Function