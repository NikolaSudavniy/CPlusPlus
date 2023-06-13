#pragma once
#include "Calc.h"

string get_client_input(string prompt);

class Command
{
protected:
	Calc* calculator;
	Command(Calc* calc) : calculator(calc) {}
public:
	virtual ~Command() {}
	virtual void execute() = 0;
};

class Digital_key : public Command
{
public:
	Digital_key(Calc* calc) : Command(calc) {}
	void execute() override;
};

class Math_key : public Command
{
public:
	Math_key(Calc* calc) : Command(calc) {}
	void execute() override;
};

class Another_key : public Command
{
public:
	Another_key(Calc* calc) : Command(calc) {}
	void execute() override;
};