#include "ScalarConverter.hpp"

void ScalarConverter::convert(const std::string &input)
{
	std::stringstream ss(input);
	double val;
	ss >> val;
	
	toChar(val);
	toInt(val);
	toFloat(val);
	toDouble(val);
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
	std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;
}

void ScalarConverter::toDouble(double value)
{
	std::cout << "double: " << value << std::endl;
}