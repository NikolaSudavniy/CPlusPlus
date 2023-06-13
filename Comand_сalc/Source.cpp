//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//class Calc
//{
//public:
//	void Wrong_key(string key)
//	{
//		cout << "Key " << key << " wrong" << endl;
//	}
//
//	void Enterd_key(string key)
//	{
//		cout << "Enterd key " << key << endl;
//	}
//
//	void Chenge_key(string key, string new_key)
//	{
//		cout << "Key " << key << " changed to " << new_key << endl;
//	}
//};
//
//string getPlayerInput(string prompt)
//{
//	string input;
//	cout << prompt;
//	cin >> input;
//	return input;
//}
//
//class Command
//{
//protected:
//	Calc* calculator;
//	Command(Calc* calc) : calculator(calc) {}
//public:
//	virtual ~Command() {}
//	virtual void execute() = 0;
//};
//
//
//
//class Digital_key : public Command
//{
//public:
//	Digital_key(Calc* calc) : Command(calc) {}
//	void execute() override
//	{
//		string key;
//		key = getPlayerInput("Enter digital key:");
//		if (key >= "0" && key <= "9")
//		{
//			calculator->Enterd_key(key);
//		}
//		else
//			calculator->Wrong_key(key);
//	}
//};
//
//class Math_key : public Command
//{
//public:
//	Math_key(Calc* calc) : Command(calc) {}
//	void execute() override
//	{
//		string key;
//		key = getPlayerInput("Enter math key:");
//		if (key == "+" || key == "-" || key == "*" || key == "/")
//		{
//			calculator->Enterd_key(key);
//		}
//		else
//			calculator->Wrong_key(key);
//	}
//};
//
//class Another_key : public Command
//{
//public:
//	Another_key(Calc* calc) : Command(calc) {}
//	void execute() override
//	{
//		string key;
//		key = getPlayerInput("Enter key:");
//		if (key != "+" && key != "-" && key != "*" && key != "/" &&
//			key >= "0" && key <= "9")
//		{
//			cout << "You whant change key? (1 - yes, 2 - no): ";
//			int choise;
//			cin >> choise;
//			cout << "Enter new key: ";
//			string new_key;
//			cin >> new_key;
//
//			if (choise == 1)
//			{
//				calculator->Chenge_key(key, new_key);
//			}
//			else
//			{
//				calculator->Enterd_key(key);
//			}
//		}
//		else
//			calculator->Wrong_key(key);
//	}
//};
//
//int main()
//{
//	Calc calc;
//	vector<Command*> v;
//
//	v.push_back(new Digital_key(&calc));
//	v.push_back(new Math_key(&calc));
//	v.push_back(new Another_key(&calc));
//
//	for (size_t i = 0; i < v.size(); i++)
//		v[i]->execute();
//
//	for (size_t i = 0; i < v.size(); i++)
//		delete v[i];
//}