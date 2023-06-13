#pragma once
#include "Units.h"
#include <map>

class Game
{
private:
	map<string, Common_unit*> unit;
public:
	Game()
	{
		unit["Light infantry"] = new Light_infantry();
		unit["Transport vehicles"] = new Transport_vehicles();
		unit["Heavy ground vehicles"] = new Heavy_ground_vehicles();
		unit["Light ground vehicles"] = new Light_ground_vehicles();
		unit["Air transport"] = new Air_transport();
	}
	~Game()
	{
		delete unit["Light infantry"];
		delete unit["Transport vehicles"];
		delete unit["Heavy ground vehicles"];
		delete unit["Light ground vehicles"];
		delete unit["Air transport"];
	}
	Common_unit* get_unit(string key)
	{
		if (unit[key] != nullptr)
			return unit[key];
		else
			return nullptr;
	}
};