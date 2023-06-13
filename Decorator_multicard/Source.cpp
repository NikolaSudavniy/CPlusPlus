#include <iostream>
using namespace std;

class Widget
{
public:
	virtual void draw() = 0;
};

class TextField : public Widget
{
private:
	string card_number;
public:
	TextField(string number) : card_number(number) {}

	void draw() override
	{
		cout << "Universal card" << endl ;
		cout << "Card number: " << card_number << endl << endl;
	}
};

class Decorator : public Widget
{
private:
	Widget* wid;
public:
	Decorator(Widget* w) : wid(w) {}
	~Decorator() { delete wid; }

	void draw() override
	{
		wid->draw();
	}
};

class Pasport : public Decorator
{
public:
	Pasport(Widget* w) : Decorator(w) {}

	void draw() override
	{
		Decorator::draw();
		cout << "Pasport" << endl;
	}
};

class Insurance_policy : public Decorator
{
public:
	Insurance_policy(Widget* w) : Decorator(w) {}

	void draw() override
	{
		Decorator::draw();
		cout << "Insurance policy" << endl;
	}
};

class Bank_card : public Decorator
{
public:
	Bank_card(Widget* w) : Decorator(w) {}

	void draw() override
	{
		Decorator::draw();
		cout << "Bank card" << endl;
	}
};

int main()
{
	Widget* aWidget = new Bank_card(
						new Insurance_policy(
									new Pasport(
										new TextField("4149 5422 3348 5670"))));
	aWidget->draw();

	delete aWidget;
}
