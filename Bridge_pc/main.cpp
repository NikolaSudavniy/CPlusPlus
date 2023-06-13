#include <iostream>
#include "PC.h"
using namespace std;

int main()
{
	PC pc_item;

	pc_item.set_item(new PC_videocard);
	pc_item.print();

	pc_item.set_item(new PC_CPU);
	pc_item.print();

	pc_item.set_item(new PC_HDD);
	pc_item.print();

	pc_item.set_item(new PC_RAM);
	pc_item.print();
}