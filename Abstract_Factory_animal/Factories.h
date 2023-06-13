#pragma once
#include "Animals.h"

// AbstractFactory
class Continent
{
public:
	virtual Predator* createPredator() = 0;
	virtual Herbivore* createHerbivore() = 0;
};

// ConcreteFactory1
class Africans_Animals : public Continent
{
public:
	Predator* createPredator() override
	{
		return new Lion();
	}
	Herbivore* createHerbivore() override
	{
		return new Wildebeest();
	}
};

// ConcreteFactory2
class North_Americans_Animals : public Continent
{
public:
	Predator* createPredator() override
	{
		return new Wolf();
	}
	Herbivore* createHerbivore() override
	{
		return new Bison();
	}
};