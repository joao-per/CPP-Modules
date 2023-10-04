#include "RPN.hpp"

int main(int argc, char* argv[])
{
	if (argc != 2)
	{
		std::cerr << "Error: Invalid number of arguments." << std::endl;
		return 1;
	}

	RPN rpnCalculator;
	try
	{
		int result = rpnCalculator.calculateRPN(argv[1]);
		std::cout << result << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}

	return 0;
}
