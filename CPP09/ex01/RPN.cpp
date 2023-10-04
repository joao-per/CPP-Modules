#include "RPN.hpp"
#include <vector>
#include <fstream>
#include <sstream>
#include <iostream>
#include <stdexcept>
#include <stdlib.h>

RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(const RPN& other)
{
	*this = other;
}

RPN& RPN::operator=(const RPN& other)
{
	if (this != &other)
		this->operands = other.operands;
	return (*this);
}

int RPN::performOperation(int a, int b, char op)
{
	switch (op)
	{
		case '+':
			return a + b;
		case '-':
			return a - b;
		case '*':
			return a * b;
		case '/':
			if (b == 0)
				throw std::runtime_error("Division by 0.");
			return a / b;
		default:
			throw std::runtime_error("Invalid operator.");
	}
}

int RPN::calculateRPN(const std::string& expression)
{
	std::string token;
	std::istringstream iss(expression);

	while (iss >> token)
	{
		if (isdigit(token[0]))
			operands.push(std::atoi(token.c_str()));
		else if (token.size() == 1 && std::string("+-*/").find(token[0]) != std::string::npos)
		{
			if (operands.size() < 2)
				throw std::runtime_error("Not enough operands.");
			// Pop two operands from the stack
			int operand2 = operands.top(); operands.pop();
			int operand1 = operands.top(); operands.pop();

			// Perform operation and push the result back
			operands.push(performOperation(operand1, operand2, token[0]));
			//std::cout << "Pushed " << performOperation(operand1, operand2, token[0]) << std::endl;
		}
		else
			throw std::runtime_error("Invalid token.");

	}

	if(operands.size() != 1)
		throw std::runtime_error("Invalid expression.");

	return (operands.top());
}
