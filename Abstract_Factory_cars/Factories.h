#pragma once
#pragma once
#include "Cars.h"

class Cars_factory
{
public:
	virtual ~Cars_factory() {}
	virtual Hatchback* create_hacback() = 0;
	virtual Roadster* create_roadster() = 0;
	virtual Cabriolet* create_cabriolet() = 0;
	virtual Coupe* create_coupe() = 0;
};

class Audi_cars_factory : public Cars_factory
{
public:
	Hatchback* create_hacback() override
	{
		return new Audi_hatchback;
	}

	Roadster* create_roadster() override
	{
		return new Audi_roadster;
	}

	Cabriolet* create_cabriolet() override
	{
		return new Audi_cabriolet;
	}

	Coupe* create_coupe() override
	{
		return new Audi_coupe;
	}
};

class Ford_cars_factory : public Cars_factory
{
public:
	Hatchback* create_hacback() override
	{
		return new Ford_hatchback;
	}

	Roadster* create_roadster() override
	{
		return new Ford_roadster;
	}

	Cabriolet* create_cabriolet() override
	{
		return new Ford_cabriolet;
	}

	Coupe* create_coupe() override
	{
		return new Ford_coupe;
	}
};
