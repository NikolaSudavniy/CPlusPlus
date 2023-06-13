#pragma once
#include "Smartphone.h"

class Factory
{
public:
	virtual smartphone* print_info() = 0;
	virtual ~Factory() {}
};

class Y15_Factory : public Factory
{
public:
	smartphone* print_info() override
	{
		return new Y15;
	}
};

class Redmi_Note_8_Factory : public Factory
{
public:
	smartphone* print_info() override
	{
		return new Redmi_Note_8;
	}
};

class iPhone_11_Factory : public Factory
{
public:
	smartphone* print_info() override
	{
		return new iPhone_11;
	}
};