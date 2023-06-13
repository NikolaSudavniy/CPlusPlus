#include <iostream>
#include <vector>
#include "Figure.h"
#include "Factory.h"
#include "ConsoleLib.h"
using namespace std;

int main()
{
	square_Factory* square_factory = new square_Factory;
	stick_Factory* stick_factory = new stick_Factory;
	let_T_Factory* let_T_factory = new let_T_Factory;
	let_S_Factory* let_S_factory = new let_S_Factory;
	let_S_rvrs_Factory* let_S_rvrs_factory = new let_S_rvrs_Factory;
	let_G_Factory* let_G_factory = new let_G_Factory;
	let_G_rvrs_Factory* let_G_rvrs_factory = new let_G_rvrs_Factory;
	
	vector<figures*> v;
	v.push_back(square_factory->create_figure());
	v.push_back(stick_factory->create_figure());
	v.push_back(let_T_factory->create_figure());
	v.push_back(let_S_factory->create_figure());
	v.push_back(let_S_rvrs_factory->create_figure());
	v.push_back(let_G_factory->create_figure());
	v.push_back(let_G_rvrs_factory->create_figure());

	for (size_t i = 0; i < v.size(); i++)
		v[i]->draw();

	delete square_factory;
	delete stick_factory;
	delete let_T_factory;
	delete let_S_factory;
	delete let_S_rvrs_factory;
	delete let_G_factory;
	delete let_G_rvrs_factory;

	SetColor(White, Black);
}