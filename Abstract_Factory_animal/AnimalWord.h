#pragma once
#include "Factories.h"

class Animal_World
{
public:
	void is_Animal_Word(Continent* Anml)
	{
		Predator* myPredator = Anml->createPredator();
		Herbivore* myHerbivore = Anml->createHerbivore();

		myHerbivore->eat_grass();
		myPredator->eat();

		delete myHerbivore;
		delete myPredator;
	};
};