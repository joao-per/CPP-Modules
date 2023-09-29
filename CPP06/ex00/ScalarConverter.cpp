#include "ScalarConverter.hpp"
#include <iomanip>
#include <iostream>

void ScalarConverter::convert(const std::string &input)
{
    if (input == "inf" || input == "inff")
    {
        processValues(std::numeric_limits<double>::infinity());
        return;
    }
    if (input == "-inf" || input == "-inff")
    {
        processValues(-std::numeric_limits<double>::infinity());
        return;
    }
    if (input == "nan" || input == "nanf")
    {
        processValues(std::numeric_limits<double>::quiet_NaN());
        return;
    }
    if (input.length() == 1 && isprint(input[0]) && !isdigit(input[0]))
    {
        processValues(static_cast<double>(input[0]));
        return;
    }
    
    if (input[input.size() - 1] == 'f')
    {
        std::string floatStr = input.substr(0, input.size() - 1); // remove the 'f'
        std::stringstream ssFloat(floatStr);
        float floatVal;
        if (ssFloat >> floatVal && ssFloat.eof())
        {
            processValues(static_cast<double>(floatVal));
            return;
        }
    }

    // Try to convert to int
    std::stringstream ssInt(input);
    int intVal;
    if (ssInt >> intVal && ssInt.eof())
    {
        processValues(static_cast<double>(intVal));
        return;
    }

    // Try to convert to double
    std::stringstream ssDouble(input);
    double doubleVal;
    if (ssDouble >> doubleVal && ssDouble.eof())
    {
        processValues(doubleVal);
        return;
    }

    // If none of the above, then it's invalid input
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: nanf" << std::endl;
    std::cout << "double: nan" << std::endl;
}

void ScalarConverter::processValues(double value)
{
    toChar(value);
    toInt(value);
    toFloat(value);
    toDouble(value);
}

void ScalarConverter::toChar(double value)
{
	if (std::isnan(value) || std::isinf(value) || value < std::numeric_limits<char>::min() || value > std::numeric_limits<char>::max())
	{
		std::cout << "char: impossible" << std::endl;
		return;
	}
	char c = static_cast<char>(value);
	if (std::isprint(c))
		std::cout << "char: '" << c << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
}

void ScalarConverter::toInt(double value)
{
	if (std::isnan(value) || std::isinf(value) || value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max())
	{
		std::cout << "int: impossible" << std::endl;
		return;
	}
	std::cout << "int: " << static_cast<int>(value) << std::endl;
}

void ScalarConverter::toFloat(double value)
{
    if (std::isnan(value))
    {
        std::cout << "float: nanf" << std::endl;
        return;
    }
    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f" << std::endl;
}

void ScalarConverter::toDouble(double value)
{
    if (std::isnan(value))
    {
        std::cout << "double: nan" << std::endl;
        return;
    }
    std::cout << "double: " << value << std::endl;
}