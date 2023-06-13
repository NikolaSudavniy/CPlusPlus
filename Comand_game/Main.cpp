#include "Comand.h"

int main()
{
	Tick_tack_toe game;

	Command* create = new Create_game(&game);
	Command* move = new Make_move(&game);
	Command* print =new Print_moves(&game);

	create->execute();
	for (size_t i = 0; i < 9; i++)
	{
		move->execute();
	}
	print->execute();

	size_t choice;
	cout << "Would you like to roll back? (1-yes, 2-no): ";
	cin >> choice;

	if (choice == 1)
	{
		Command* roll_back = new Game_rollback(&game);

		size_t us_moves;
		cout << "How many moves do you want to rollback: ";
		cin >> us_moves;

		for (size_t i = 0; i < us_moves; i++)
		{
			roll_back->execute();
		}
		print->execute();
		for (size_t i = 0; i < us_moves; i++)
		{
			move->execute();
		}

		delete roll_back;
		print->execute();
	}
	else
		cout << "Thanks for game" << endl;

	delete create;
	delete move;
	delete print;
}