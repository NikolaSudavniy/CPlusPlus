#pragma once
#include "Components.h"

class Car_builder
{
protected:
	cars* car;
public:
	Car_builder() : car(nullptr) {}
	virtual ~Car_builder() {}

	virtual void create_car() {}
	virtual void build_body() {}
	virtual void build_engine() {}
	virtual void build_wheels() {}
	virtual void build_transmission() {}

	virtual cars* get_car() { return car; }
};

class Lanos_builder : public Car_builder
{
public:
	void create_car() override { car = new Daewoo_Lanos; }
	void build_body() override { car->set_body( "Sedan" ); }
	void build_engine() override { car->set_engine( 98 ); }
	void build_wheels() override { car ->set_wheels( 13 ); }
	void build_transmission() override { car->set_transmission( "5 Manual" ); }
};

class Probe_builder : public Car_builder
{
public:
	void create_car() override { car = new Ford_Probe; }
	void build_body() override { car->set_body("Coupe"); }
	void build_engine() override { car->set_engine(160); }
	void build_wheels() override { car->set_wheels(14); }
	void build_transmission() override { car->set_transmission("4 Auto"); }
};

class Patriot_builder : public Car_builder
{
public:
	void create_car() override { car = new UAZ_Patriot; }
	void build_body() override { car->set_body("Universal"); }
	void build_engine() override { car->set_engine(120); }
	void build_wheels() override { car->set_wheels(16); }
	void build_transmission() override { car->set_transmission("4 Manual"); }
};

class Getz_builder : public Car_builder
{
public:
	void create_car() override { car = new Hyundai_Getz; }
	void build_body() override { car->set_body("Hatchback"); }
	void build_engine() override { car->set_engine(66); }
	void build_wheels() override { car->set_wheels(13); }
	void build_transmission() override { car->set_transmission("4 Auto"); }
};