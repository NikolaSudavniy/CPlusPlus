//Паттерн "Observer". Проект "Оповещение постов ГАИ".
//В проекте должна быть реализована отправка сообщений всем постам ГАИ.

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Observer
{
public:
	virtual void update(string situation) = 0;
};

class Message
{
private:
	string message;
	vector<Observer*> m_views;
public:
	void attach(Observer* obs)
	{
		m_views.push_back(obs);
	}

	void set_msg(string situation)
	{
		message = situation;
		notify();
	}

	void notify()
	{
		for (size_t i = 0; i < m_views.size(); i++)
			m_views[i]->update(message);
	}
};

class Polise_post_observer : public Observer
{
private:
	int p_num;
public:
	Polise_post_observer(Message* situation, int num)
	{
		situation->attach(this);
		p_num = num;
	}

	void update(string m) override
	{
		cout << "Post #" << p_num << " get message : " << m << endl;
	}
};

class Polise_department_observer : public Observer
{
private:
	int p_num;
public:
	Polise_department_observer(Message* situation, int num)
	{
		situation->attach(this);
		p_num = num;
	}

	void update(string m) override
	{
		cout << "Department #" << p_num << " get message : " << m << endl;
	}
};

int main()
{
	Message msg;

	Polise_department_observer dep_1(&msg, 1);
	Polise_post_observer post_1(&msg, 1);
	Polise_post_observer post_2(&msg, 2);

	msg.set_msg("Vkrali salo!");
}