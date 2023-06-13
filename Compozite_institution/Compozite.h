#pragma once
#include <vector>
#include "Components.h"
using namespace std;

class Composite_component : public Component
{
private:
	vector<Component*> c;
public:
	~Composite_component()
	{
		for (size_t i = 0; i < c.size(); i++)
			delete c[i];
	}

	int get_cost() override
	{
		int total = 0;
		for (size_t i = 0; i < c.size(); i++)
			total += c[i]->get_cost();
		return total;
	}

	void add_component(Component* p) override
	{
		c.push_back(p);
	}
};

//i. ���������
//	1. ����� ������� �������� ������ �������� �����
Composite_component* clerk_PC()
{
	Composite_component* clrk_pc = new Composite_component;

	clrk_pc->add_component(new CPU);
	clrk_pc->add_component(new High_HDD);
	clrk_pc->add_component(new RAM);

	return clrk_pc;
}

//��������� �� ������ �����
//	1. ��������� 2.2���
//	2. ��������� �� 80��
//	3. ����������� ������ 1024��
Composite_component* PC()
{
	Composite_component* pc = new Composite_component;

	pc->add_component(new CPU);
	pc->add_component(new HDD);
	pc->add_component(new RAM);

	return pc;
}

//���� ���������
//	i.���������
//		1. ����� ������� �������� ������ �������� �����
//	ii.������� ��������������
Composite_component* clerk_table()
{
	Composite_component* clrk_table = new Composite_component;

	clrk_table->add_component(clerk_PC());
	clrk_table->add_component(new Office_Tool);

	return clrk_table;
}

//c.���� �������
//	i.���������
Composite_component* teacher_table()
{
	Composite_component* t_table = new Composite_component;
	t_table->add_component(PC());
	return t_table;
}

//a. �����������q ����
//		i.��������� �� ������ �����
//			1. ��������� 2.2���
//			2. ��������� �� 80��
//			3. ����������� ������ 1024��
//		ii.������� ����� ������� �����
Composite_component* PC_table()
{
	Composite_component* pc_table = new Composite_component;

	pc_table->add_component(new Table);
	pc_table->add_component(new Power_socket);
	pc_table->add_component(PC());

	return pc_table;
}

//b. ���������� ������
//	i. 10 - 20 �������� ���� ������������� ���
Composite_component* Magazine_table()
{
	Composite_component* mgzn_tbl = new Composite_component;

	for (size_t i = 0; i < 20; i++)
		mgzn_tbl->add_component(new Magazine);

	return mgzn_tbl;
}

//a. 20 ������
//	i.����� ������� �����
//		ii.����� ���������� � ���� ��� ����
Composite_component* twenty_black_tables()
{
	Composite_component* tbt = new Composite_component;

	for (size_t i = 0; i < 20; i++)
		tbt->add_component(new Black_table);
	tbt->add_component(new Arrange_tables_in_circle);

	return tbt;
}

//b.����
//	i. 4 �����
Composite_component* dining_table()
{
	Composite_component* d_table = new Composite_component;

	for (size_t i = 0; i < 4; i++)
		d_table->add_component(new Chair);

	return d_table;
}

//b.�����
//	i.����� ������������ ��������
Composite_component* Board()
{
	Composite_component* board = new Composite_component;

	board->add_component(new Whiteboard);
	board->add_component(new Marcer_set);

	return board;
}

//1. ��������
//	a.������ ���� ��������� � ������ �����
//	b.���������� ������
//		i. 10 - 20 �������� ���� ������������� ���
//	c.������ �����
//	d.���� ���������
//		i.���������
//			1. ����� ������� �������� ������ �������� �����
//		ii.������� ��������������
//	e.����� � ������ � �������� �����
Composite_component* Reception()
{
	Composite_component* reception = new Composite_component;

	reception->add_component(new Warm_tones);
	reception->add_component(Magazine_table());
	reception->add_component(new Soft_sofa);
	reception->add_component(clerk_PC());
	reception->add_component(new Whater_cooler);

	return reception;
}

//2. ��������� 1
//	a. 10 ������
//	b.�����
//	c.���� �������
//		i.���������
//	d.������� ������� �����������
Composite_component* Auditorium_1()
{
	Composite_component* auditorium_1 = new Composite_component;

	for (size_t i = 0; i < 10; i++)
		auditorium_1->add_component(new Table);
	auditorium_1->add_component(Board());
	auditorium_1->add_component(teacher_table());
	auditorium_1->add_component(new Posters_of_mathematicians);

	return auditorium_1;
}

//3. ��������� 2
//	a. 20 ������
//		i.����� ������� �����
//		ii.����� ���������� � ���� ��� ����
//	b.�����
//	c.������ �����
Composite_component* Auditorium_2()
{
	Composite_component* auditorium_2 = new Composite_component;

	auditorium_2->add_component(twenty_black_tables());
	auditorium_2->add_component(Board());
	auditorium_2->add_component(new Soft_sofa);

	return auditorium_2;
}

//4. ������������ ���������
//	a. 10 ������������ ������
//		i.��������� �� ������ �����
//			1. ��������� 2.2���
//			2. ��������� �� 80��
//			3. ����������� ������ 1024��
//		ii.������� ����� ������� �����
//	b.�����
//		i.����� ������������ ��������
Composite_component* Auditorium_3()
{
	Composite_component* auditorium_3 = new Composite_component;

	auditorium_3->add_component(PC_table());
	auditorium_3->add_component(Board());

	return auditorium_3;
}

//5. ��������
//	a.�������� �������
//	b.����
//		i. 4 �����
//	c.�����������
//	d.����������
Composite_component* Dining_room()
{
	Composite_component* d_room = new Composite_component;

	d_room->add_component(new Coffee_machine);
	d_room->add_component(new Fridge);
	d_room->add_component(new Washbasin);
	d_room->add_component(dining_table());

	return d_room;
}