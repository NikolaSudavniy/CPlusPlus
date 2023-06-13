#pragma once
#include <string>
#include <iostream>
#include "Item.h"
using namespace std;

void videocard::set_info(const string us_name, const string us_type_mem, const int us_mem, const int us_frequency)
{
	name = us_name;
	type_mem = us_type_mem;
	memory = us_mem;
	frequency = us_frequency;
}

void CPU::set_info(const string us_name, const string us_soket, const int us_num, const int us_frequency)
{
	name = us_name;
	soket = us_soket;
	number_of_cores = us_num;
	frequency = us_frequency;
}

void HDD::set_info(const string us_name, const string us_interface, const int us_mem, const int us_speed)
{
	name = us_name;
	hdd_interface = us_interface;
	memory = us_mem;
	speed= us_speed;
}

void RAM::set_info(const string us_name, const string us_type_mem, const int us_mem, const int us_frequency)
{
	name = us_name;
	type_mem = us_type_mem;
	memory = us_mem;
	frequency = us_frequency;
}

void videocard::print_info()
{
	cout << "Videocard info: " << endl << endl;
	cout << "Name: " << get_name() << endl;
	cout << "Memory type: " << get_type_mem() << endl;
	cout << "Memory: " << get_mem() << endl;
	cout << "Frequency: " << get_frequency()<< endl << endl;
}

void CPU::print_info()
{
	cout << "CPU info: " << endl << endl;
	cout << "Name: " << get_name() << endl;
	cout << "Soket: " << get_soket() << endl;
	cout << "Number of cores: " << get_num() << endl;
	cout << "Frequency: " << get_frequency() << endl << endl;
}

void HDD::print_info()
{
	cout << "HDD info: " << endl << endl;
	cout << "Name: " << get_name() << endl;
	cout << "Interface: " << get_interface() << endl;
	cout << "Memory: " << get_mem() << endl;
	cout << "Speed: " << get_speed() << endl << endl;
}

void RAM::print_info()
{
	cout << "RAM info: " << endl << endl;
	cout << "Name: " << get_name() << endl;
	cout << "Memory type: " << get_type_mem() << endl;
	cout << "Memory: " << get_mem() << endl;
	cout << "Frequency: " << get_frequency() << endl << endl;
}