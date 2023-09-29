#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <limits>
#include <sstream>

class ScalarConverter
{
	public:
		static void convert(const std::string &input);
	private:
		static void toChar(double value);
		static void toInt(double value);
		static void toFloat(double value);
		static void toDouble(double value);
};

#endif