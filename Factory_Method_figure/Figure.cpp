#include <iostream>
#include <vector>
#include "Figure.h"
#include "ConsoleLib.h"
using namespace std;

void square::draw()
{
	SetColor(Red, Black);
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			if (is_square[i][j] == 1)
				cout << char(219);
			else
				cout << char(32);
		}
		cout << endl;
	}
	cout << endl << endl;
};

void stick::draw()
{
	SetColor(Yellow, Black);
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			if (is_stick[i][j] == 1)
				cout << char(219);
			else
				cout << char(32);
		}
		cout << endl;
	}
	cout << endl << endl;
};

void let_T::draw()
{
	SetColor(Magenta, Black);
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			if (is_let_T[i][j] == 1)
				cout << char(219);
			else
				cout << char(32);
		}
		cout << endl;
	}
	cout << endl << endl;
};

void let_S::draw()
{
	SetColor(Green, Black);
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			if (is_let_S[i][j] == 1)
				cout << char(219);
			else
				cout << char(32);
		}
		cout << endl;
	}
	cout << endl << endl;
};

void let_S_rvrs::draw()
{
	SetColor(LightCyan, Black);
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			if (is_let_S_rvrs[i][j] == 1)
				cout << char(219);
			else
				cout << char(32);
		}
		cout << endl;
	}
	cout << endl << endl;
};

void let_G::draw()
{
	SetColor(LightBlue, Black);
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			if (is_let_G[i][j] == 1)
				cout << char(219);
			else
				cout << char(32);
		}
		cout << endl;
	}
	cout << endl << endl;
};

void let_G_rvrs::draw()
{
	SetColor(LightRed, Black);
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			if (is_let_G_rvrs[i][j] == 1)
				cout << char(219);
			else
				cout << char(32);
		}
		cout << endl;
	}
	cout << endl << endl;
};