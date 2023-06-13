#pragma once
#include "Caretaker.h"

class memento;

class content
{
private:
	string text;
public:
	string get_text() const { return text; }
	void set_text(string user_txt)
	{
		text = user_txt;
	}

	void print_text()
	{
		cout << text;
	}

	memento* SaveToMemento()
	{
		return new memento(text);
	}

	void RestoreFromMemento(memento* _memento)
	{
		this->set_text(_memento->get_text());
		this->print_text();
	}
};