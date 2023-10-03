#include "BitcoinExchange.hpp"


BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const std::string& dbPath)
{
	loadBitcoinDB(dbPath);
}

void BitcoinExchange::loadBitcoinDB(const std::string& filePath)
{
	std::ifstream file(filePath.c_str());
	if (!file.is_open())
		throw std::runtime_error("Error: could not open file.");

	std::string line;
	while (std::getline(file, line))
	{
		std::istringstream ss(line);
		std::string date;
		float value;

		std::getline(ss, date, '|');
		ss >> value;

		int dateInt = convertDateToInt(date);
		btcDB[dateInt] = value;
	}
}



int BitcoinExchange::convertDateToInt(const std::string& dateStr) const
{

	std::string year = dateStr.substr(0, 4);
	std::string month = dateStr.substr(5, 2);
	std::string day = dateStr.substr(8, 2);

	std::string dateIntStr = year + month + day;
	int dateInt = std::atoi(dateIntStr.c_str());
	return (dateInt);
	
}

float BitcoinExchange::getClosestValue(const std::string& date) const
{
	int dateInt = convertDateToInt(date);
	std::cout << "date: " << date << std::endl;
	std::cout << "dateInt: " << dateInt << std::endl;
	std::map<int, float>::const_iterator it = btcDB.lower_bound(dateInt);

	// Ensure the iterator is not at the beginning to avoid decrementing an iterator pointing to the beginning of the map
	if (it != btcDB.begin())
	{
		--it;  // Move to closest lower date
		return it->second;
	}
	else
		throw std::runtime_error("Error: No previous date available in the database.");
}

std::pair<std::string, float> BitcoinExchange::parseInputLine(const std::string& line)
{
	std::istringstream ss(line);
	std::string date;
	float value;

	std::getline(ss, date, '|');
	ss >> value;

	//additional validation and error handling here if necessary
	
	return std::make_pair(date, value);
}
