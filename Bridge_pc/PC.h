#pragma once
#include <string>
#include "PC_impl.h"
using namespace std;

class PC
{
private:
	PC_impl* pc_item;
public:
	void set_item(PC_impl* it_item) { pc_item  = it_item; }
	void print() { pc_item->info_about_item(); }
};