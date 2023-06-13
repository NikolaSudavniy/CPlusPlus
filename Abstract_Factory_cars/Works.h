#pragma once
#include "Factories.h"

class works
{
public:
	void is_works(Cars_factory* factory)
	{
		Hatchback* my_hatchback = factory->create_hacback();
		Roadster* my_roadster = factory->create_roadster();
		Cabriolet* my_cabriolet = factory->create_cabriolet();
		Coupe* my_cope = factory->create_coupe();
	

		my_hatchback->info();
		my_roadster->info();
		my_cabriolet->info();
		my_cope->info();

		delete my_hatchback;
		delete my_roadster;
		delete my_cabriolet;
		delete my_cope;
	};
};