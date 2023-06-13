#pragma once
#include <vector>
#include "Memento.h"

class caretaker
{
private:
	vector<memento*> saved_states;
public:
	memento*& operator[](size_t index)
	{
		if (index >= saved_states.size())
			throw out_of_range("Caretaker::operator[]: Index out of range");
		else
			return saved_states[index];
	}

	void add(memento* m)
	{
		saved_states.push_back(m);
	}

	size_t get_size() const { return saved_states.size(); }
};