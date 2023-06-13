#include <iostream>
#include <string>
using namespace std;

class Printer
{
public:
	virtual ~Printer() {}
	virtual void compress(const string& file) = 0;
};

class Laser_printer : public Printer
{
public:
	void compress(const string& file) override
	{
		cout << "Laser printer" << endl;
	}
};

class LED_printer : public Printer
{
public:
	void compress(const string& file) override
	{
		cout << "LED printer" << endl;
	}
};

class Inkjet_printer : public Printer
{
public:
	void compress(const string& file) override
	{
		cout << "Inkjet printer" << endl;
	}
};

class Matrix_printer : public Printer
{
public:
	void compress(const string& file) override
	{
		cout << "Matrix printer" << endl;
	}
};

class _3D_printer : public Printer
{
public:
	void compress(const string& file) override
	{
		cout << "3D printer" << endl;
	}
};

class Printing
{
private:
	Printer* p;
public:
	Printing(Printer* pr) : p(pr) {}
	~Printing() { delete p; }

	void compress(const string& file)
	{
		p->compress(file);
	}
};


int main()
{
	Printing* p = new Printing(new _3D_printer);
	p->compress("file.txt");
	delete p;
}
