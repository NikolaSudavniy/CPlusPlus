#pragma once
#include <iostream>
using namespace std;

class item
{
public:
	virtual void start() = 0;
};

class videocard: public item
{
public:
	void start() override { cout << "Launch videocard" << endl; }
	void monitor_check() { cout << "Checking communication with monitor" << endl; }
	void data_about_RAM() { cout << "Data about RAM" << endl; }
	void data_about_DVD() { cout << "Data about DVD-rom" << endl; }
	void data_about_HDD() { cout << "Data about hard drive" << endl; }

	void parting_massage() { cout << "By!!!" << endl; }
};

class memory: public item
{
public:
	void start() override { cout << "Launch devices" << endl; }
	void memory_analysis() { cout << "Memory analysis" << endl; }

	void clean() { cout << "Clean RAM" << endl; }
};

class HDD: public item
{
public:
	void start() override { cout << "Launch hard drive" << endl; }
	void bootsector_check() { cout << "Check boot sector" << endl; }

	void stop_device() { cout << "HDD stop" << endl; }
};

class DVD_rom: public item
{
public:
	void start() override { cout << "Launch DVD-rom" << endl; }
	void disk_check() { cout << "Check disk" << endl; }

	void return_position() { cout << "Return to starting position" << endl; }
};

class power_block: public item
{
public:
	void start() override { cout << "Turn on pover" << endl; }
	void videocard_power() { cout << "Feed videocard" << endl; }
	void memory_power() { cout << "Feed RAM" << endl; }
	void DVD_power() { cout << "Feed DVD-rom" << endl; }
	void HDD_pover() { cout << "Feed hard drive" << endl; }

	void stop_videocard_power() { cout << "Stop feed videocard" << endl; }
	void stop_memory_power() { cout << "Stop feed RAM" << endl; }
	void stop_DVD_power() { cout << "Stop feed DVD-rom" << endl; }
	void stop_HDD_power() { cout << "Stop feed hard drive" << endl; }
	void power_off() { cout << "Power off" << endl; }
};

class sensors
{
public:
	void check_voltage() { cout << "Check voltage" << endl; }
	void check_power_block() { cout << "Check temperature in power block" << endl; }
	void check_videocard() { cout << "Check temperature in videocard" << endl; }
	void check_RAM() { cout << "Check temperature in RAM" << endl; }
	void check_all() { cout << "Check all temperature" << endl; }
};