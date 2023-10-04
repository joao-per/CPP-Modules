#include "BitcoinExchange.hpp"
#include <fstream>
#include <sstream>
#include <stdexcept>

// Default constructor
BitcoinExchange::BitcoinExchange() {}

// Constructor that accepts a database file path
BitcoinExchange::BitcoinExchange(const std::string& dbPath)
{
	loadBitcoinDB(dbPath);  // Load the Bitcoin exchange rate database
}

// Destructor
BitcoinExchange::~BitcoinExchange() {}

// Copy Constructor
BitcoinExchange::BitcoinExchange(const BitcoinExchange& other)
{
	*this = other;
}

// Assignement operator
BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other)
{
	if (this != &other)
		this->exchangeRates = other.exchangeRates;
	return *this;
}

// Function to convert a date to an integer
int BitcoinExchange::convertDateToInt(const std::string& dateStr) const
{
	std::string year = dateStr.substr(0, 4);
	std::string month = dateStr.substr(5, 2);
	std::string day = dateStr.substr(8, 2);

	std::string dateIntStr = year + month + day;
	return std::atoi(dateIntStr.c_str());
}

float BitcoinExchange::getClosestValue(const std::string& date) const
{
	std::map<std::string, float>::const_iterator it = exchangeRates.lower_bound(date);
	if (it == exchangeRates.end() || it->first != date)
	{
		if (it == exchangeRates.begin())
			throw std::runtime_error("No previous date available in the database.");
		--it;  
	}
	return it->second;
}

// Function to parse an input line into date and value
std::pair<std::string, float> BitcoinExchange::parseInputLine(const std::string& line) {
	std::istringstream ss(line);
	std::string date;
	float value;

	std::getline(ss, date, '|');
	ss >> value;

	if (value < 0 || value > 1000)
		throw std::runtime_error("Value out of range.");

	return std::make_pair(date, value);
}

// Function to load and parse the Bitcoin exchange rate database
void BitcoinExchange::loadBitcoinDB(const std::string& dbPath)
{
	std::ifstream dataFile(dbPath.c_str());

	if (!dataFile.is_open())
		throw std::runtime_error("Error: could not open file.");

	std::string line;
	std::getline(dataFile, line);  // Ignore header

	while (std::getline(dataFile, line))
	{
		std::stringstream lineStream(line);
		std::string date, rateStr;
		std::getline(lineStream, date, ',');
		std::getline(lineStream, rateStr);

		std::stringstream rateStream(rateStr);
		float rate;
		rateStream >> rate;

		exchangeRates[date] = rate;
	}
	dataFile.close();
}
