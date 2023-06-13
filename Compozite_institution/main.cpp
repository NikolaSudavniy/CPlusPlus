#pragma once
#include "Components.h"
#include "Compozite.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	Composite_component* institution = new Composite_component;
	
	institution->add_component(Reception());
	institution->add_component(Auditorium_1());
	institution->add_component(Auditorium_2());
	institution->add_component(Auditorium_3());
	institution->add_component(Dining_room());
	
	cout << "Total value of this institution: "
		 << institution->get_cost()
		 << " euro" << endl;

	delete institution;
}