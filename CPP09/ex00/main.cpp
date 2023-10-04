#include "BitcoinExchange.hpp"  

int main(int argc, char* argv[])
{
	try
	{
		// Check if filename argument is provided
		if (argc != 2)
		{
			std::cerr << "Error: incorrect number of arguments." << std::endl;
			return 1;
		}

		// Instantiate BitcoinExchange with given data file
		BitcoinExchange btcExchange("data.csv");

		// Open input file specified in command-line arguments
		std::ifstream inputFile(argv[1]);
		if (!inputFile.is_open())
		{
			std::cerr << "Error: could not open file." << std::endl;
			return 1;
		}

		std::string inputLine;
		while (std::getline(inputFile, inputLine))
		{
			try
			{
				// Parse the input line to extract date and value
				std::pair<std::string, float> parsedInput = btcExchange.parseInputLine(inputLine);
				std::string date = parsedInput.first;
				float value = parsedInput.second;

				// Get the closest BTC value and print the result
				float closestBtcValue = btcExchange.getClosestValue(date);
				std::cout << date << " => " << value << " = " << (value * closestBtcValue) << std::endl;
			}
			catch (const std::exception& ex)
			{
				std::cerr << "Error: " << ex.what() << std::endl;
			}
		}

		inputFile.close(); // Ensure to close the input file when done
	}
	catch (const std::exception& ex)
	{
		std::cerr << "Error: " << ex.what() << std::endl;
	}
	return 0;
}
