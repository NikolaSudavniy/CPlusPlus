#pragma once
#include <string>
using namespace std;

class unit
{
protected:
	string name;
	int attack;
	int speed;
	int health;
	int protect;
public:
	unit(string Name, int Attack, int Speed, int Health, int Protect):
		name{ Name },
		attack{ Attack },
		speed{ Speed },
		health{ Health },
		protect{ Protect }{}

	string get_name() const { return name; };
	int get_attack() const { return attack; };
	int get_speed() const { return speed; };
	int get_health() const { return health; };
	int get_protect() const { return protect; };

	virtual void move(int X, int Y) {};
};