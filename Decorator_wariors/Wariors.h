#pragma once
#include "Decorator.h"
#include <iostream>
using namespace std;

class Human : public unit
{
public:
	Human() : unit("Human", 20, 20, 150, 0) { }
	void move(int X, int Y) override { cout << "Human move in " 
											<< X << ":" << Y << ", speed:" << speed << endl; };
};

class Elf : public unit
{
public:
	Elf() : unit("Elf", 15, 30, 100, 0) { }
	void move(int X, int Y) override { cout << "Elf move in " 
											<< X << ":" << Y << ", speed:" << speed << endl; };
};

class Human_warior: public units_Decorator
{
public:
	Human_warior(unit* m_unit): units_Decorator
	(
		"Human Warior",
		m_unit->get_attack() + 20,
		m_unit->get_speed() + 10,
		m_unit->get_health() + 50,
		m_unit->get_protect() + 20,
		m_unit
	){ }

	void move(int X, int Y) override { cout << "Warior move in " 
											<< X << ":" << Y << ", speed:" << speed << endl; };
};

class Swordsman : public units_Decorator
{
public:
	Swordsman(unit* m_unit) : units_Decorator
	(
		"Swordsman",
		m_unit->get_attack() + 40,
		m_unit->get_speed() - 10,
		m_unit->get_health() + 50,
		m_unit->get_protect() + 40,
		m_unit
	) { }

	void move(int X, int Y) override { cout << "Swordsman move in "
											<< X << ":" << Y << ", speed:" << speed << endl; };
};

class Archer : public units_Decorator
{
public:
	Archer(unit* m_unit) : units_Decorator
	(
		"Archer",
		m_unit->get_attack() + 20,
		m_unit->get_speed() + 20,
		m_unit->get_health() + 50,
		m_unit->get_protect() + 10,
		m_unit
	) { }

	void move(int X, int Y) override { cout << "Archer move in "
											<< X << ":" << Y << ", speed:" << speed << endl;};
};

class Rider : public units_Decorator
{
public:
	Rider(unit* m_unit) : units_Decorator
	(
		"Rider",
		m_unit->get_attack() - 10,
		m_unit->get_speed() + 40,
		m_unit->get_health() + 200,
		m_unit->get_protect() + 100,
		m_unit
	) { }

	void move(int X, int Y) override { cout << "Rider move in " 
											<< X << ":" << Y << ", speed:" << speed << endl;};
};

class Elf_warior : public units_Decorator
{
public:
	Elf_warior(unit* m_unit) : units_Decorator
	(
		"Elf warior",
		m_unit->get_attack() + 20,
		m_unit->get_speed() - 10,
		m_unit->get_health() + 100,
		m_unit->get_protect() + 20,
		m_unit
	) { }

	void move(int X, int Y) override { cout << "Elf warior move in "
											<< X << ":" << Y << ", speed:" << speed << endl;};
};

class Elf_mage : public units_Decorator
{
public:
	Elf_mage(unit* m_unit) : units_Decorator
	(
		"Elf mage",
		m_unit->get_attack() + 10,
		m_unit->get_speed() + 10,
		m_unit->get_health() - 50,
		m_unit->get_protect() + 10,
		m_unit
	) { }

	void move(int X, int Y) override { cout << "Elf mage move in "
											<< X << ":" << Y << ", speed:" << speed << endl;};
};

class Arbalester : public units_Decorator
{
public:
	Arbalester(unit* m_unit) : units_Decorator
	(
		"Arbalester",
		m_unit->get_attack() + 20,
		m_unit->get_speed() + 10,
		m_unit->get_health() + 50,
		m_unit->get_protect() - 10,
		m_unit
	) { }

	void move(int X, int Y) override { cout << "Arbalester move in "
											<< X << ":" << Y << ", speed:" << speed << endl;};
};


class Evil_mage : public units_Decorator
{
public:
	Evil_mage(unit* m_unit) : units_Decorator
	(
		"Evil mage",
		m_unit->get_attack() + 70,
		m_unit->get_speed() + 20,
		m_unit->get_health() + 0,
		m_unit->get_protect() + 0,
		m_unit
	) { }

	void move(int X, int Y) override {	cout << "Evil mage move in "
											 << X << ":" << Y << ", speed:" << speed << endl;};
};

class Good_mage : public units_Decorator
{
public:
	Good_mage(unit* m_unit) : units_Decorator
	(
		"Good mage",
		m_unit->get_attack() + 50,
		m_unit->get_speed() + 30,
		m_unit->get_health() + 100,
		m_unit->get_protect() + 30,
		m_unit
	) { }

	void move(int X, int Y) override { cout << "Good mage move in "
											<< X << ":" << Y << ", speed:" << speed << endl;};
};