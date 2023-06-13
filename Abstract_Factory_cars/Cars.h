#pragma once
#include <iostream>
using namespace std;

class Hatchback
{
public:
	virtual ~Hatchback() {}
	virtual void info() = 0;
};

class Roadster
{
public:
	virtual ~Roadster() {}
	virtual void info() = 0;
};

class Cabriolet
{
public:
	virtual ~Cabriolet() {}
	virtual void info() = 0;
};

class Coupe
{
public:
	virtual ~Coupe() {}
	virtual void info() = 0;
};

class Audi_hatchback : public Hatchback
{
public:
	void info() override
	{
		cout << "Audi hatchback" << endl;
	}
};

class Audi_roadster : public Roadster
{
public:
	void info() override
	{
		cout << "Audi roadster" << endl;
	}
};

class Audi_cabriolet : public Cabriolet
{
public:
	void info() override
	{
		cout << "Audi cabriolet" << endl;
	}
};

class Audi_coupe : public Coupe
{
public:
	void info() override
	{
		cout << "Audi coupe" << endl;
	}
};

class Ford_hatchback : public Hatchback
{
public:
	void info() override
	{
		cout << "Ford hatchback" << endl;
	}
};

class Ford_roadster : public Roadster
{
public:
	void info() override
	{
		cout << "Ford roadster" << endl;
	}
};

class Ford_cabriolet : public Cabriolet
{
public:
	void info() override
	{
		cout << "Ford cabriolet" << endl;
	}
};

class Ford_coupe : public Coupe
{
public:
	void info() override
	{
		cout << "Ford coupe" << endl;
	}
};