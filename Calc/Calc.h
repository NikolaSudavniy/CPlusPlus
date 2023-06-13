#pragma once
#include <stack>
#include <string>

using namespace std;

class calc
{
private:
	string expression;
	stack <string> expr_stack;
	stack <string> expr_stack_reverse;
	
	const static size_t ar_size = 5;
	char operators[ar_size] = { '+', '-', '*', '/', '^' };

	double result = 0;

public:
	void input_expr();
	void output();
	void ignore_space();
	void partition_on_bkt();
	void partition_off_bkt();
	void partition_on_number();
	void partition_on_signs();
	void calculated();
	void clear();

	double number();
	double parentheses();
	double degree();
	double multipl_division();
	double math_expr();
};