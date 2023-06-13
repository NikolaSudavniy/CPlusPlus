#include <iostream>
#include "Components.h"
using namespace std;

void Daewoo_Lanos::info()
{
	cout << "Daewoo Lanos is assembled!!!" << endl
		<< "lanos body: " << body << endl
		<< "lanos engine: " << engine << endl
		<< "lanos wheels: " << wheels << endl
		<< "lanos transmission: " << transmission << endl;
}

void Ford_Probe::info()
{
	cout << "Ford Probe is assembled!!!" << endl
		<< "probe body: " << body << endl
		<< "probe engine: " << engine << endl
		<< "probe wheels: " << wheels << endl
		<< "probe transmission: " << transmission << endl;
}

void UAZ_Patriot::info()
{
	cout << "UAZ Patriot is assembled!!!" << endl
		<< "patriot body: " << body << endl
		<< "patriot engine: " << engine << endl
		<< "patriot wheels: " << wheels << endl
		<< "patriot transmission: " << transmission << endl;
}

void Hyundai_Getz::info()
{
	cout << "Hyundai Getz is assembled!!!" << endl
		<< "getz body: " << body << endl
		<< "getz engine: " << engine << endl
		<< "getz wheels: " << wheels << endl
		<< "getz transmission: " << transmission << endl;
}