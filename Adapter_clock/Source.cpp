#include <iostream>
using namespace std;

const double one_hour_in_degrees = 30;

class Arrows_clock
{
public:
	double get_arrow_c_time()
	{
		double t;

		
		/*	t = 3 * one_hour_in_degrees;*/
		t = 120;

		return t;
	}
};

class Digital_clock
{
public:
	virtual ~Digital_clock() {}
	virtual double get_digital_c_time() = 0;
};

class Digital_clock_adapter : public Digital_clock
{
private:
	Arrows_clock* arrows_c;
public:
	Digital_clock_adapter(Arrows_clock* c) : arrows_c(c) { }
	~Digital_clock_adapter() { delete arrows_c; }

	double get_digital_c_time() override
	{
		return
			arrows_c -> get_arrow_c_time() / one_hour_in_degrees;
	}
};

int main()
{
	Digital_clock* c = new Digital_clock_adapter(new Arrows_clock);
	cout << "Time on digital clock: " << c ->get_digital_c_time() << endl;
	delete c;
}
