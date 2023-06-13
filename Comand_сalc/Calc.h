#pragma once
#include <iostream>
#include <string>
using namespace std;

class Calc
{
public:
	void Wrong_key(string key)
	{
		cout << "Key " << key << " wrong" << endl;
	}

	void Enterd_key(string key)
	{
		cout << "Enterd key " << key << endl;
	}

	void Chenge_key(string key, string new_key)
	{
		cout << "Key " << key << " changed to " << new_key << endl;
	}
};