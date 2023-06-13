#pragma once
#include <string>
#include <iostream>
using namespace std;

class memento
{
private:
	string str;
public:
	memento(string us_str)
	{
		str = us_str;
	}

	string get_text() const { return str; }
	void set_text(string name) { name = name; }
};
