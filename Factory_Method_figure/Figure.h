#pragma once
#include <iostream>
#include <vector>
using namespace std;

class figures
{
public:
	virtual void draw() = 0;
	virtual ~figures() {};
};

class square : public figures
{
private:
	vector<vector<int>> is_square
	{
		{1, 1, 0, 0},
		{1, 1, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 0, 0}
	};
public:
	void draw() override;
};

class stick : public figures
{
private:
	vector<vector<int>> is_stick
	{
		{1, 0, 0, 0},
		{1, 0, 0, 0},
		{1, 0, 0, 0},
		{1, 0, 0, 0}
	};
public:
	void draw() override;
};

class let_T : public figures
{
private:
	vector<vector<int>> is_let_T
	{
		{1, 1, 1, 0},
		{0, 1, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 0, 0}
	};
public:
	void draw() override;
};

class let_S : public figures
{
private:
	vector<vector<int>> is_let_S
	{
		{0, 1, 1, 0},
		{1, 1, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 0, 0}
	};
public:
	void draw() override;
};

class let_S_rvrs : public figures
{
private:
	vector<vector<int>> is_let_S_rvrs
	{
		{1, 1, 0, 0},
		{0, 1, 1, 0},
		{0, 0, 0, 0},
		{0, 0, 0, 0}
	};
public:
	void draw() override;
};

class let_G : public figures
{
private:
	vector<vector<int>> is_let_G
	{
		{1, 1, 0, 0},
		{1, 0, 0, 0},
		{1, 0, 0, 0},
		{0, 0, 0, 0}
	};
public:
	void draw() override;
};

class let_G_rvrs : public figures
{
private:
	vector<vector<int>> is_let_G_rvrs
	{
		{1, 1, 0, 0},
		{0, 1, 0, 0},
		{0, 1, 0, 0},
		{0, 0, 0, 0}
	};
public:
	void draw() override;
};