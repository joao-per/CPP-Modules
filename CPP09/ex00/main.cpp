#include "BitcoinExchange.hpp"  

int main()
{
	try
	{
		BitcoinExchange btcExchange("data.csv");

		std::string inputLine;
		while (std::getline(std::cin, inputLine))
		{
			try
			{
				std::pair<std::string, float> parsedInput = btcExchange.parseInputLine(inputLine);
                std::string date = parsedInput.first;
                float value = parsedInput.second;
				float closestBtcValue = btcExchange.getClosestValue(date);
				std::cout << date << " => " << value << " = " << (value * closestBtcValue) << std::endl;
			}
			catch (const std::exception& ex)
			{
				std::cerr << "Error: " << ex.what() << std::endl;
			}
		}
	}
	catch (const std::exception& ex)
	{
		std::cerr << "Error: " << ex.what() << std::endl;
	}
	return (0);
}
