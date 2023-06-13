#pragma once
#include "Subsystem.h"

class Computer
{
private:
	videocard* v;
	memory* m;
	HDD* h;
	DVD_rom* d;
	power_block* p;
	sensors* s;
public:
	Computer()
	{
		v = new videocard();
		m = new memory();
		h = new HDD();
		d = new DVD_rom();
		p = new power_block();
		s = new sensors();
	}

	~Computer()
	{
		delete s;
		delete p;
		delete d;
		delete h;
		delete m;
		delete v;
	}

	void startComputer()
	{
		cout << "start pc" << endl << endl;

		p->start();
		s->check_voltage();
		s->check_power_block();
		s->check_videocard();
		p->videocard_power();
		v->start();
		v->monitor_check();
		s->check_RAM();
		p->memory_power();
		m->start();
		m->memory_analysis();
		v->data_about_RAM();
		p->DVD_power();
		d->start();
		d->disk_check();
		v->data_about_DVD();
		p->HDD_pover();
		h->start();
		h->bootsector_check();
		v->data_about_HDD();
		s->check_all();
		cout << endl;
	}

	void stopComputer()
	{
		cout << "stop pc" << endl << endl;

		
		h->stop_device();
		m->clean();
		m->memory_analysis();
		v->parting_massage();
		d->return_position();
		p->stop_videocard_power();
		p->stop_memory_power();
		p->stop_DVD_power();
		p->stop_HDD_power();
		s->check_voltage();
		p->power_off();
		cout << endl;
	}
};