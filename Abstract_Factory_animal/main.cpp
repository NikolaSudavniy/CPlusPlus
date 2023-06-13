#pragma once
#include <iostream>
#include "AnimalWord.h"
using namespace std;

int main()
{
	Animal_World* world = new Animal_World;
	Continent* continent;

	int choise;

	cout << "1 - Africa" << endl;
	cout << "2 - North Americans" << endl;
	cout << "enter your choise: ";
	cin >> choise;
	cout << endl;

	if (choise == 1)
		continent = new Africans_Animals;
	else
		continent = new North_Americans_Animals;

	world->is_Animal_Word(continent);
	delete continent;
	delete world;
}