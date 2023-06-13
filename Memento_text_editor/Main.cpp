#include "Subject.h"
#include <conio.h>
#include <windows.h>

int main()
{
	content c;
	caretaker m;
	size_t count = 0;
	string _str = "";

	c.set_text("");
	m.add(c.SaveToMemento());
	count++;

	c.set_text("String");
	m.add(c.SaveToMemento());
	count++;


	c.set_text("String change1");
	m.add(c.SaveToMemento());
	count++;

	c.set_text("String change1 change2");
	m.add(c.SaveToMemento());
	count++;


	c.set_text("String change1 change2 change3");
	m.add(c.SaveToMemento());
	count++;

	system("cls");
	cout << "z - Undo, y - Redo \n\n\n";
	c.print_text();

	size_t key = 0;
	while (key != 27)
	{
		key = 0;
		key = _getch();

		switch (key)
		{
			// y
		case 121:
			if (count < m.get_size())
			{
				system("cls");
				cout << "z - Undo, y - Redo \n\n\n";
				c.RestoreFromMemento(m[count]);
				count++;
			}
			break;
			// z
		case 122:
			if (count > 1)
			{
				system("cls");
				cout << "z - Undo, y - Redo \n\n\n";
				count--;
				c.RestoreFromMemento(m[count - 1]);
			}
			break;
		}
	}
}