#include <iostream>
#include "Unit.h"
#include "Decorator.h"
#include "Wariors.h"
using namespace std;

int main()
{
	Human human;
	Elf elf;

	Human_warior warior(&human);
	Swordsman swordsman(&warior);
	Archer archer(&warior);
	Rider rider(&swordsman);
	
	Elf_warior elf_warior(&elf);
	Elf_mage elf_mage(&elf);
	Arbalester arbalester(&elf_warior);
	Evil_mage evil_mage(&elf_mage);
	Good_mage good_mage(&elf_mage);

	human.move(1, 1);
	warior.move(2, 1);
	swordsman.move(3, 1);
	archer.move(4, 1);
	rider.move(5, 1);

	cout << endl;

	elf.move(1, 10);
	elf_warior.move(2, 10);
	elf_mage.move(3, 10);
	arbalester.move(4, 1);
	evil_mage.move(5, 10);
	good_mage.move(6, 10);
}