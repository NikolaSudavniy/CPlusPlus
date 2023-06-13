#include "Comand.h"

string get_client_input(string prompt)
{
string input;
cout << prompt;
cin >> input;
return input;
}

void Digital_key::execute()
{
	string key;
	key = get_client_input("Enter digital key:");
	if (key >= "0" && key <= "9")
	{
		calculator->Enterd_key(key);
	}
	else
		calculator->Wrong_key(key);
}

void Math_key::execute()
{
	string key;
	key = get_client_input("Enter math key:");
	if (key == "+" || key == "-" || key == "*" || key == "/")
	{
		calculator->Enterd_key(key);
	}
	else
		calculator->Wrong_key(key);
}

void Another_key::execute()
{
	string key;
	key = get_client_input("Enter key:");
	if (key != "+" && key != "-" && key != "*" && key != "/" &&
		key >= "0" && key <= "9")
	{
		cout << "You whant change key? (1 - yes, 2 - no): ";
		int choise;
		cin >> choise;
		cout << "Enter new key: ";
		string new_key;
		cin >> new_key;

		if (choise == 1)
		{
			calculator->Chenge_key(key, new_key);
		}
		else
		{
			calculator->Enterd_key(key);
		}
	}
	else
		calculator->Wrong_key(key);
}