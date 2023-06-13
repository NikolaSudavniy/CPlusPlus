#pragma once
#include <string>
using namespace std;

class PC_impl
{
protected:
	PC_impl* itm_pc;
public:
	virtual ~PC_impl() { delete itm_pc; }
	virtual void info_about_item() = 0;
};

class PC_videocard : public PC_impl
{
private:
	string name;
public:
	PC_videocard() : name(" ") {}
	void info_about_item() override;
};

class PC_CPU : public PC_impl
{
private:
	string name;
public:
	PC_CPU() : name(" ") {}
	void info_about_item() override;
};

class PC_HDD : public PC_impl
{
private:
	string name;
public:
	PC_HDD() : name(" ") {}
	void info_about_item() override;
};

class PC_RAM : public PC_impl
{
private:
	string name;
public:
	PC_RAM() : name(" ") {}
	void info_about_item() override;
};