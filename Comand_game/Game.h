#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Tick_tack_toe
{
private:
	vector<size_t> oX;
	vector<size_t> oY;
	size_t choice;
public:
	void create()
	{
		cout << "Create game" << endl;
	}

	void rollback()
	{
		oX.pop_back();
		oY.pop_back();

		cout << "Rollback completed!" << endl;
	}

	void save()
	{
		cout << "Save move!" << endl;
	}

	void make_move(size_t square_x, size_t square_y)
	{
		cout << "Make move to square: " << square_x << ", " << square_y << endl;
		oX.push_back(square_x);
		oY.push_back(square_y);
		save();
	}

	void print()
	{
		for (size_t i = 0; i < oX.size(); i++)
			cout << oX[i] << "," << oY[i] << "; ";
	}
};