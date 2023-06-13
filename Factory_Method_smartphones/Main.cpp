#include "Factory.h"
#include <vector>


int main()
{
	Y15_Factory* y15 = new Y15_Factory;
	Redmi_Note_8_Factory* redmi_note_8_Factory = new Redmi_Note_8_Factory;
	iPhone_11_Factory* iphone_11 = new iPhone_11_Factory;

	vector<smartphone*> s;
	s.push_back(y15->print_info());
	s.push_back(redmi_note_8_Factory->print_info());
	s.push_back(iphone_11->print_info());

	for (size_t i = 0; i < s.size(); i++)
		s[i]->info();

	delete y15;
	delete redmi_note_8_Factory;
	delete iphone_11;
}