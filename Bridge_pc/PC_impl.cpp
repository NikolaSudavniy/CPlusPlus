#include "Item.h"
#include "PC_impl.h"

void PC_videocard::info_about_item()
{
	videocard v;
	v.set_info("MSI GeForce RTX 2080ti Lightning", "GDDR6", 11, 14000);
	v.print_info();
}

void PC_CPU::info_about_item()
{
	CPU c;
	c.set_info("Core i9-9900K", "LGA 1151 v2", 8, 3600);
	c.print_info();
}

void PC_HDD::info_about_item()
{
	HDD h;
	h.set_info("Seagate BarraCuda Pro", "SATA3", 10, 7200);
	h.print_info();
}

void PC_RAM::info_about_item()
{
	RAM r;
	r.set_info("G.Skill Trident Z Royal", "DDR4", 16, 3200);
	r.print_info();
}