#include "Comand.h"
#include <vector>

int main()
{
	Calc calc;
	vector<Command*> v;

	v.push_back(new Digital_key(&calc));
	v.push_back(new Math_key(&calc));
	v.push_back(new Another_key(&calc));

	for (size_t i = 0; i < v.size(); i++)
		v[i]->execute();

	for (size_t i = 0; i < v.size(); i++)
		delete v[i];
}