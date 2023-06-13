#pragma once
#include "Unit.h"

class units_Decorator abstract: public unit
{
protected:
	unit* is_unit = nullptr;
public:
	units_Decorator
	(	
		string name,
		int attack,
		int speed,
		int health,
		int protect,
		unit* warior
	): unit(name, attack, speed, health, protect)
	{
		if(is_unit != nullptr)
			this->is_unit = warior;
	}

	virtual ~units_Decorator()
	{
		if (is_unit != nullptr)
			delete is_unit;
	}
};