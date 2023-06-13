#include <iostream>
#include "Animals.h"
using namespace std;

void Wildebeest::eat_grass()
{
	if (get_life())
	{
		int this_weight = get_weight();
		cout << "wildebeest ate grass" << endl;
		set_weight(this_weight += 10);
	}
	else
	{
		cout << "wildebeest died" << endl;
	}
}

void Lion::eat()
{
	Wildebeest wildebeest;

	int this_power = get_power();
	int Wildebeest_weight = wildebeest.get_weight();

	if (this_power > Wildebeest_weight)
	{
		cout << "lion ate wildbeest" << endl;
		set_power(this_power += 10);
		wildebeest.set_weight(false);
	}
	else
	{
		cout << "lion could not" << endl;
		set_power(this_power -= 10);
	}
}

void Wolf::eat()
{
	Bison bison;

	int this_power = get_power();
	int Wildebeest_weight = bison.get_weight();

	if (power > Wildebeest_weight)
	{
		cout << "wolf ate bison" << endl;
		set_power(this_power += 10);
		bison.set_weight(false);
	}
	else
	{
		cout << "wolf could not" << endl;
		set_power(this_power -= 10);
	}
}

void Bison::eat_grass()
{
	if (get_life())
	{
		int this_weight = get_weight();
		cout << "bison ate grass" << endl;
		set_weight(this_weight += 10);
	}
	else
	{
		cout << "bison died" << endl;
	}
}