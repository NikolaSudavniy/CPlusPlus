#pragma once
#include <iostream>
#include "Figure.h"
using namespace std;

class Factory
{
public:
	virtual figures* create_figure() = 0;
	virtual ~Factory() {}
};

class square_Factory : public Factory
{
public:
	figures* create_figure() override
	{
		return new square;
	}
};

class stick_Factory : public Factory
{
public:
	figures* create_figure() override
	{
		return new stick;
	}
};

class let_T_Factory : public Factory
{
public:
	figures* create_figure() override
	{
		return new let_T;
	}
};

class let_S_Factory : public Factory
{
public:
	figures* create_figure() override
	{
		return new let_S;
	}
};

class let_S_rvrs_Factory : public Factory
{
public:
	figures* create_figure() override
	{
		return new let_S_rvrs;
	}
};

class let_G_Factory : public Factory
{
public:
	figures* create_figure() override
	{
		return new let_G;
	}
};

class let_G_rvrs_Factory : public Factory
{
public:
	figures* create_figure() override
	{
		return new let_G_rvrs;
	}
};