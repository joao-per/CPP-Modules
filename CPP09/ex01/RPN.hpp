#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <string>
#include <sstream>

class RPN
{
	public:
		RPN();
		~RPN();
		RPN(const RPN& other);
		RPN& operator=(const RPN& other);
		int calculateRPN(const std::string& expression);
	private:
		int performOperation(int a, int b, char op);
		std::stack<int> operands;
};

#endif