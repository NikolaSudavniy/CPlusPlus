#pragma once
#include "Car_bilder.h"
#include <memory>

// Director
class Manager
{
public:
	cars* create_car(Car_builder& builder)
	{
		builder.create_car();
		builder.build_body();
		builder.build_engine();
		builder.build_wheels();
		builder.build_transmission();
		
		return builder.get_car();
	}
};