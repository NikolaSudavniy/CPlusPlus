#pragma once
#include <iostream>
#include "Works.h"
using namespace std;

int main()
{
	works* _works = new works;
	Cars_factory* factory;

	int choise;

	cout << "1 - Audi" << endl;
	cout << "2 - Ford" << endl;
	cout << "enter your choise: ";
	cin >> choise;
	cout << endl;

	if (choise == 1)
		factory = new Audi_cars_factory;
	else
		factory = new Ford_cars_factory;

	_works->is_works(factory);

	delete factory;
	delete _works;
}