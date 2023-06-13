#pragma once
#include <iostream>
using namespace std;

struct Coordinates
{
	size_t Ox;
	size_t Oy;
};

class Common_unit abstract
{
private:
	string unit_image;
	Coordinates unit_coordinates;
	size_t unit_speed;
	size_t unit_health;
public:
	Common_unit() :
		unit_image{ "" },
		unit_coordinates{ 0 },
		unit_speed{ 0 },
		unit_health{ 0 } { }

	string get_image() { return unit_image; }
	Coordinates get_coords() { return unit_coordinates; }
	size_t get_speed() { return unit_speed; }
	size_t get_strength() { return unit_health; }

	void set_image(string image) { unit_image = image; }
	void set_coords(size_t x, size_t y) { unit_coordinates.Ox = x; unit_coordinates.Oy = y; }
	void set_speed(size_t speed) { unit_speed = speed; }
	void set_strength(size_t strength) { unit_health = strength; }

	virtual void print(Coordinates coordinates) abstract;
};