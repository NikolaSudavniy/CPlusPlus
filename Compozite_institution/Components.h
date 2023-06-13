#pragma once
#include <iostream>
#include <stdexcept>
using namespace std;

class Component
{
public:
	virtual ~Component() {}

	virtual int get_cost() = 0;

	virtual void add_component(Component* cmpnt)
	{
		throw exception("Cannot add component.");
	}
};

class Warm_tones : public Component
{
public:
	int get_cost() override { return 10; }
};


class Magazine : public Component
{
public:
	int get_cost() override { return 7; }
};

class Soft_sofa : public Component
{
public:
	int get_cost() override { return 65; }
};

class Office_Tool : public Component
{
public:
	int get_cost() override { return 150; }
};

class Whater_cooler : public Component
{
public:
	int get_cost() override { return 1500; }
};

class Table : public Component
{
public:
	int get_cost() override { return 79; }
};

class Whiteboard : public Component
{
public:
	int get_cost() override { return 70; }
};

class Posters_of_mathematicians : public Component
{
public:
	int get_cost() override { return 20; }
};

class Black_table : public Component
{
public:
	int get_cost() override { return 80; }
};

class Arrange_tables_in_circle : public Component
{
public:
	int get_cost() override { return 10; }
};

class CPU : public Component
{
public:
	int get_cost() override { return 500; }
};

class HDD : public Component
{
public:
	int get_cost() override { return 355; }
};

class High_HDD : public Component
{
public:
	int get_cost() override { return 489; }
};

class RAM : public Component
{
public:
	int get_cost() override { return 200; }
};

class Power_socket : public Component
{
public:
	int get_cost() override { return 14; }
};

class Marcer_set : public Component
{
public:
	int get_cost() override { return 5; }
};

class Coffee_machine : public Component
{
public:
	int get_cost() override { return 900; }
};

class Chair : public Component
{
public:
	int get_cost() override { return 30; }
};

class Fridge : public Component
{
public:
	int get_cost() override { return 1700; }
};

class Washbasin : public Component
{
public:
	int get_cost() override { return 1000; }
};