#pragma once
#include <string>
#include <iostream>
using namespace std;

class item
{
public:
	virtual void print_info() = 0;
};

class videocard: public item
{
private:
	string name = " ";
	string type_mem = " ";
	int memory = 0;
	int frequency = 0;
public:
	void set_info(const string us_name, const string us_type_mem, const int us_mem, const int us_frequency);
	void print_info() override;
	string get_name() const { return name; };
	string get_type_mem() const { return type_mem; };
	int get_mem() const { return memory; };
	int get_frequency() const { return frequency; };
};

class CPU: public item
{
private:
	string name = " ";
	string soket = " ";
	int number_of_cores = 0;
	int frequency = 0;
public:
	void set_info(const string us_name, const string us_soket, const int us_num, const int us_frequency);
	void print_info() override;
	string get_name() const { return name; };
	string get_soket() const { return soket; };
	int get_num() const { return number_of_cores; };
	int get_frequency() const { return frequency; };
};

class HDD : public item
{
private:
	string name = " ";
	string hdd_interface = " ";
	int memory = 0;
	int speed = 0;
public:
	void set_info(const string us_name, const string us_interface, const int us_mem, const int us_speed);
	void print_info() override;
	string get_name() const { return name; };
	string get_interface() const { return hdd_interface; };
	int get_mem() const { return memory; };
	int get_speed() const { return speed; };
};

class RAM : public item
{
private:
	string name = " ";
	string type_mem = " ";
	int memory = 0;
	int frequency = 0;
public:
	void set_info(const string us_name, const string us_type_mem, const int us_mem, const int us_frequency);
	void print_info() override;
	string get_name() const { return name; };
	string get_type_mem() const { return type_mem; };
	int get_mem() const { return memory; };
	int get_frequency() const { return frequency; };
};