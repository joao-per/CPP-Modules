#include "RPN.hpp"
#include <vector>
#include <fstream>
#include <sstream>
#include <iostream>
#include <stdexcept>
#include <stdlib.h>

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
        {
            operands.push(std::atoi(token.c_str()));
            std::cout << "Pushed " << token << std::endl;
        }

    }
    return 0;
}
