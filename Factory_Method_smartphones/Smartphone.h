#pragma once
#include <string>
using namespace std;

class smartphone
{
public:
	virtual void info() = 0;
	virtual ~smartphone() {};
};

class Y15 : public smartphone
{
private:
	string name = "vivo Y15";
	size_t price = 4999;
	size_t camera = 13;
	size_t cores = 8;
	size_t RAM = 4;
public:
	void info() override;
};

class Redmi_Note_8 : public smartphone
{
private:
	string name = "Xiaomi Redmi Note 8 Pro";
	size_t price = 6999;
	size_t camera = 64;
	size_t cores = 8;
	size_t RAM = 8;
public:
	void info() override;
};

class iPhone_11 : public smartphone
{
private:
	string name = "Apple iPhone 11 Pro Max";
	size_t price = 37999;
	size_t camera = 12;
	size_t cores = 6;
	size_t RAM = 4;
public:
	void info() override;
};