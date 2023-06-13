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

//i. Компьютер
//	1. Важно наличие большого объема жесткого диска
Composite_component* clerk_PC()
{
	Composite_component* clrk_pc = new Composite_component;

	clrk_pc->add_component(new CPU);
	clrk_pc->add_component(new High_HDD);
	clrk_pc->add_component(new RAM);

	return clrk_pc;
}

//Компьютер на каждом столе
//	1. Процессор 2.2ГРц
//	2. Винчестер на 80ГБ
//	3. Оперативная память 1024МБ
Composite_component* PC()
{
	Composite_component* pc = new Composite_component;

	pc->add_component(new CPU);
	pc->add_component(new HDD);
	pc->add_component(new RAM);

	return pc;
}

//Стол секретаря
//	i.Компьютер
//		1. Важно наличие большого объема жесткого диска
//	ii.Офисный инструментарий
Composite_component* clerk_table()
{
	Composite_component* clrk_table = new Composite_component;

	clrk_table->add_component(clerk_PC());
	clrk_table->add_component(new Office_Tool);

	return clrk_table;
}

//c.Стол учителя
//	i.Компьютер
Composite_component* teacher_table()
{
	Composite_component* t_table = new Composite_component;
	t_table->add_component(PC());
	return t_table;
}

//a. компьютерныq стол
//		i.Компьютер на каждом столе
//			1. Процессор 2.2ГРц
//			2. Винчестер на 80ГБ
//			3. Оперативная память 1024МБ
//		ii.Розетка возле каждого стола
Composite_component* PC_table()
{
	Composite_component* pc_table = new Composite_component;

	pc_table->add_component(new Table);
	pc_table->add_component(new Power_socket);
	pc_table->add_component(PC());

	return pc_table;
}

//b. Журнальный столик
//	i. 10 - 20 журналов типа «компьютерный мир»
Composite_component* Magazine_table()
{
	Composite_component* mgzn_tbl = new Composite_component;

	for (size_t i = 0; i < 20; i++)
		mgzn_tbl->add_component(new Magazine);

	return mgzn_tbl;
}

//a. 20 столов
//	i.Столы черного цвета
//		ii.Столы выставлены в овал или круг
Composite_component* twenty_black_tables()
{
	Composite_component* tbt = new Composite_component;

	for (size_t i = 0; i < 20; i++)
		tbt->add_component(new Black_table);
	tbt->add_component(new Arrange_tables_in_circle);

	return tbt;
}

//b.Стол
//	i. 4 стула
Composite_component* dining_table()
{
	Composite_component* d_table = new Composite_component;

	for (size_t i = 0; i < 4; i++)
		d_table->add_component(new Chair);

	return d_table;
}

//b.Доска
//	i.Набор разноцветных маркеров
Composite_component* Board()
{
	Composite_component* board = new Composite_component;

	board->add_component(new Whiteboard);
	board->add_component(new Marcer_set);

	return board;
}

//1. Приемная
//	a.Должна быть выполнена в теплых тонах
//	b.Журнальный столик
//		i. 10 - 20 журналов типа «компьютерный мир»
//	c.Мягкий диван
//	d.Стол секретаря
//		i.Компьютер
//			1. Важно наличие большого объема жесткого диска
//		ii.Офисный инструментарий
//	e.Кулер с теплой и холодной водой
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

//2. Аудитория 1
//	a. 10 столов
//	b.Доска
//	c.Стол учителя
//		i.Компьютер
//	d.Плакаты великих математиков
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

//3. Аудитория 2
//	a. 20 столов
//		i.Столы черного цвета
//		ii.Столы выставлены в овал или круг
//	b.Доска
//	c.Мягкий диван
Composite_component* Auditorium_2()
{
	Composite_component* auditorium_2 = new Composite_component;

	auditorium_2->add_component(twenty_black_tables());
	auditorium_2->add_component(Board());
	auditorium_2->add_component(new Soft_sofa);

	return auditorium_2;
}

//4. Компьютерная аудитория
//	a. 10 компьютерных столов
//		i.Компьютер на каждом столе
//			1. Процессор 2.2ГРц
//			2. Винчестер на 80ГБ
//			3. Оперативная память 1024МБ
//		ii.Розетка возле каждого стола
//	b.Доска
//		i.Набор разноцветных маркеров
Composite_component* Auditorium_3()
{
	Composite_component* auditorium_3 = new Composite_component;

	auditorium_3->add_component(PC_table());
	auditorium_3->add_component(Board());

	return auditorium_3;
}

//5. Столовая
//	a.Кофейный автомат
//	b.Стол
//		i. 4 стула
//	c.Холодильник
//	d.Умывальник
Composite_component* Dining_room()
{
	Composite_component* d_room = new Composite_component;

	d_room->add_component(new Coffee_machine);
	d_room->add_component(new Fridge);
	d_room->add_component(new Washbasin);
	d_room->add_component(dining_table());

	return d_room;
}