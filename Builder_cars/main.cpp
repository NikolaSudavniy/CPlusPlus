#include <iostream>
#include "Director.h"
using namespace std;

int main()
{
	Manager manager;
	Lanos_builder lanos;
	Probe_builder probe;
	Patriot_builder patriot;
	Getz_builder getz;

	cars* la = manager.create_car(lanos);
	cars* pr = manager.create_car(probe);
	cars* pa = manager.create_car(patriot);
	cars* gz = manager.create_car(getz);

	la->info();
	cout << endl;
	pr->info();
	cout << endl;
	pa->info();
	cout << endl;
	gz->info();
	cout << endl;

	delete la;
	delete pr;
	delete pa;
	delete gz;
}