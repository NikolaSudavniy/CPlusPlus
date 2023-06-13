#include "Game.h"

int main()
{
	Game* game = new Game();
	Common_unit* unit;
	Coordinates p_of_unit;

	unit = game->get_unit("Light ground vehicles");
	p_of_unit.Ox = 1;
	p_of_unit.Oy = 2;
	unit->print(p_of_unit);

	unit = game->get_unit("Light ground vehicles");
	p_of_unit.Ox = 3;
	p_of_unit.Oy = 5;
	unit->print(p_of_unit);
	
	unit = game->get_unit("Air transport");
	p_of_unit.Ox = 2;
	p_of_unit.Oy = 4;
	unit->print(p_of_unit);

	unit = game->get_unit("Light infantry");
	p_of_unit.Ox = 8;
	p_of_unit.Oy = 11;
	unit->print(p_of_unit);

	delete game;
}