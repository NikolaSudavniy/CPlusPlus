#include <iostream>
#include "Calc.h"
#include <stack>
#include <string>
#include <math.h>

using namespace std;

size_t i = 0;
size_t count_bkt = 0;
bool error = false;
bool presence_number = false;

void calc::input_expr()
{
	cout << "Enter expression: ";
	getline(cin, expression);
}

void calc::output()
{
	try
	{
		if (error || count_bkt != 0 )
			throw 1;
		cout << "Result: " << result;
	}
	catch (int &j)
	{
		cout << "Incorect expression!";
	}
}

void calc::ignore_space()
{
	while (true)
	{
		if (expression[i] != ' ')
			break;

		i++;
	}
}

void calc::partition_on_bkt()
{
	while (true)
	{
		ignore_space();
		string tmp = "";

		tmp += expression[i];
		if (tmp == "(")
		{
			i++;
			expr_stack.push(tmp);
			count_bkt++;
		}
		else
			return;
	}
}

void calc::partition_off_bkt()
{
	while (true)
	{

		ignore_space();
		string tmp = "";

		tmp += expression[i];
		if (tmp == ")")
		{
			i++;
			expr_stack.push(tmp);
			count_bkt--;
		}
		else
			return;
	}
}

void calc::partition_on_number()
{
	ignore_space();
	string tmp_num = "";
	if (isdigit(expression[i]))
	{
		presence_number = true;
		tmp_num += expression[i];

		while (true)
		{
			i++;

			if (isdigit(expression[i]) || expression[i] == '.')
				tmp_num += expression[i];
			else
			{
				expr_stack.push(tmp_num);
				break;
			}
		}
	}
	else
		error = true;
}

void calc::partition_on_signs()
{
	ignore_space();
	bool isoperator = false;

	if (expression[i] != '\0') {
		for (size_t j = 0; j < ar_size; j++)
		{
			if (expression[i] == operators[j])
			{
				isoperator = true;
				string tmp = "";
				tmp += expression[i];
				expr_stack.push(tmp);
				i++;
				break;
			}
		}

		if (!isoperator)
			error = true;
	}
}

double calc::number()
{
	double res = 0;
	int count = 0;

	for (;;)
	{
		if (expr_stack_reverse.empty())
			return res;
		
		string tmp = expr_stack_reverse.top();
		expr_stack_reverse.pop();

		char s = ' ';
		s = tmp[0];
			
		if (isdigit(s))
		{
			count++;
			double tmp_end = stod(tmp);
			res = tmp_end;
		}
		else
		{
			if (!count)
				error = true;
			expr_stack_reverse.push(tmp);
			return res;
		}
	}
}

double calc::parentheses()
{	
	string oper = expr_stack_reverse.top();
	expr_stack_reverse.pop();

	if (oper == "(")
	{
		double x = math_expr();
		string oper = expr_stack_reverse.top();
		expr_stack_reverse.pop();
		return x;
	}
	else
	{
		expr_stack_reverse.push(oper);
		return number();
	}
}

double calc::degree()
{
	double x = parentheses();
	double y;

	for (;;)
	{
		if (expr_stack_reverse.empty())
			return x;

		string oper = expr_stack_reverse.top();
		expr_stack_reverse.pop();

		if (oper == "^") {
			y = parentheses();
			x = pow(x, y);
		}
		else
		{
			expr_stack_reverse.push(oper);
			return x;
		}
	}
}

double calc::multipl_division() 
{
	double x = degree();
	for (;;)
	{
		if (expr_stack_reverse.empty())
			return x;
		string oper = expr_stack_reverse.top();
		expr_stack_reverse.pop();

		if (oper == "*")
			x *= degree();
		else if (oper == "/")
			x /= degree();
		else
		{
			expr_stack_reverse.push(oper);
			return x;
		}
	}
}

double calc::math_expr()
{
	double x = multipl_division();
	for (;;)
	{
		if (expr_stack_reverse.empty())
			return x;

		string oper = expr_stack_reverse.top();
		expr_stack_reverse.pop();

		if (oper == "+")
			x += multipl_division();
		else if (oper == "-")
			x -= multipl_division();
		else
		{
			expr_stack_reverse.push(oper);
			return x;
		}
	}
}

void calc::calculated()
{
	// исключение -пустая строка
	if (expression[0] == '\0' || !(expression[0] == ' ' || expression[0] == '(' || isdigit(expression[i])) || error)
	{
		error = true;
	}
	else {
		while (expression[i] != '\0')
		{
			partition_on_bkt();
			partition_on_number();
			
			partition_off_bkt();
			partition_on_signs();
			if (error)
				break;
		}

		while (!expr_stack.empty())
		{
			string tmp = expr_stack.top();
			expr_stack.pop();
			expr_stack_reverse.push(tmp);
		}
		
		if (count_bkt == 0 && presence_number && !error)
			result = math_expr();
		else
			error = true;
	}
	
}

void calc::clear()
{
	expression = "";
	result = 0;
	i = 0;
	count_bkt = 0;
	error = false;
	presence_number = false;

	while (!expr_stack.empty())
		expr_stack.pop();
	while (!expr_stack_reverse.empty())
		expr_stack_reverse.pop();
}