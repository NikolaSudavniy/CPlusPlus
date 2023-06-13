#include <iostream>
#include "Calc.h"
#include <stack>
#include <string>
#include <conio.h>

using namespace std;

int main()
{
	int esc = 27;
	int choice = 0;

	while (choice != esc)
	{
		calc A;
		A.input_expr();
		A.calculated();
		A.output();
		cout << endl << endl;
		cout << "press any key to continue or Escape to exit " << endl << endl;
		choice = _getch();
		A.clear();
	}
}