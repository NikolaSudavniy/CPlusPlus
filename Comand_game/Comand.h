#pragma once
#include "Game.h"

class Command
{
protected:
	Tick_tack_toe* pgame;
	Command(Tick_tack_toe* p) : pgame(p) {}
public:
	virtual ~Command() {}
	virtual void execute() = 0;
};

class Create_game: public Command
{
public:
	Create_game(Tick_tack_toe* p): Command(p) {}
	void execute() override
	{
		pgame->create();
	}
};

class Print_moves : public Command
{
public:
	Print_moves(Tick_tack_toe* p): Command(p) {}
	void execute() override
	{
		pgame->print();
	}
};

class Make_move : public Command
{
public:
	Make_move(Tick_tack_toe* p): Command(p) {}
	void execute() override
	{
		size_t move_x;
		size_t move_y;
		cout << "Enter axis X value: ";
		cin >> move_x;
		cout << "Enter axis Y value: ";
		cin >> move_y;
		pgame->make_move(move_x, move_y);
	}
};

class Game_rollback : public Command
{
public:
	Game_rollback(Tick_tack_toe* p): Command(p) {}
	void execute() override
	{
		cout << endl;
		pgame->rollback();
	}
};