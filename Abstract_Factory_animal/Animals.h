#pragma once

//AbstractProductA
class Predator
{
protected:
	int power = 0;
public:
	virtual ~Predator() {}
	virtual void eat() = 0;
	virtual int get_power() const = 0;
	virtual void set_power(int value) = 0;
};

//AbstractProductB
class Herbivore
{
protected:
	int weight = 0;
	bool life = true;
public:
	virtual ~Herbivore() {}
	virtual void eat_grass() = 0;
	virtual int get_weight() const = 0;
	virtual void set_weight(int value) = 0;
	virtual bool get_life() const = 0;
	virtual void set_life(bool value) = 0;
};

// ConcreteProductA1
class Lion : public Predator
{
public:
	Lion() { power = 135; };
	void eat() override;
	int get_power() const override { return power; };
	void set_power(int value) override { power = value; };
};

// ConcreteProductA1
class Wolf : public Predator
{
public:
	Wolf() { power = 730;};
	void eat() override;
	int get_power() const override { return power; };
	void set_power(int value) override { power = value; };
};

// ConcreteProductB1
class Wildebeest : public Herbivore
{
public:
	Wildebeest() { weight = 120; };
	void eat_grass() override;
	int get_weight() const override { return weight; };
	void set_weight(int value) override { weight = value; };
	bool get_life() const override { return life; };
	void set_life(bool value) override { life = value; };
};

// ConcreteProductB1
class Bison : public Herbivore
{
public:
	Bison() { weight = 710; };
	void eat_grass() override;
	int get_weight() const override { return weight; };
	void set_weight(int value) override { weight = value; };
	bool get_life() const override { return life; };
	void set_life(bool value) override { life = value; };
};