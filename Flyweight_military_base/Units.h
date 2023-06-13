#pragma once
#include "Common unit.h"
#include <string>

class Light_infantry : public Common_unit
{
public:
	Light_infantry()
	{
		set_image("Light infantry");
		set_speed(20);
		set_strength(10);
	}
	void print(Coordinates coordinates) override
	{
		this->set_coords(coordinates.Ox, coordinates.Oy);
		cout << "Light infantry - x:" << coordinates.Ox << " " << "y:" << coordinates.Oy << endl;
	}
};

class Transport_vehicles : public Common_unit
{
public:
	Transport_vehicles()
	{
		set_image("Transport vehicles");
		set_speed(70);
		set_strength(0);
	}
	void print(Coordinates coordinates) override
	{
		this->set_coords(coordinates.Ox, coordinates.Oy);
		cout << "Transport vehicles - x:" << coordinates.Ox << " " << "y:" << coordinates.Oy << endl;
	}
};

class Heavy_ground_vehicles : public Common_unit
{
public:
	Heavy_ground_vehicles()
	{
		set_image("  vehicles");
		set_speed(15);
		set_strength(150);
	}
	void print(Coordinates coordinates) override
	{
		this->set_coords(coordinates.Ox, coordinates.Oy);
		cout << "Heavy ground vehicles - x:" << coordinates.Ox << " " << "y:" << coordinates.Oy << endl;
	}
};

class Light_ground_vehicles : public Common_unit
{
public:
	Light_ground_vehicles()
	{
		set_image("Light ground vehicles");
		set_speed(50);
		set_strength(30);
	}
	void print(Coordinates coordinates) override
	{
		this->set_coords(coordinates.Ox, coordinates.Oy);
		cout << "Light ground vehicles - x:" << coordinates.Ox << " " << "y:" << coordinates.Oy << endl;
	}
};

class Air_transport : public Common_unit
{
public:
	Air_transport()
	{
		set_image("Air transport");
		set_speed(50);
		set_strength(30);
	}
	void print(Coordinates coordinates) override
	{
		this->set_coords(coordinates.Ox, coordinates.Oy);
		cout << "Air transport - x:" << coordinates.Ox << " " << "y:" << coordinates.Oy << endl;
	}
};