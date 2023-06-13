#pragma once
#include <string>
using namespace std;

class cars
{
protected:
	string body;
	int engine;
	int wheels;
	string transmission;
public:
	void set_body(const string& for_body) { body = for_body; };
	void set_engine(const int& for_engine) { engine = for_engine; };
	void set_wheels(const int& for_wheels) { wheels = for_wheels; };
	void set_transmission(const string& for_transmission) { transmission = for_transmission; };

	virtual void info() = 0;
};

class Daewoo_Lanos : public cars
{
public:
	void info() override;
};

class Ford_Probe : public cars
{
public:
	void info() override;
};

class UAZ_Patriot : public cars
{
public:
	void info() override;
};

class Hyundai_Getz : public cars
{
public:
	void info() override;
};