#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <string>
#include <map>
#include <vector>
#include <fstream>
#include <sstream>
#include <iostream>
#include <stdexcept>
#include <stdlib.h>

class BitcoinExchange
{
	public:
		BitcoinExchange();
		BitcoinExchange(const std::string& dbPath);
		BitcoinExchange(const BitcoinExchange& other);
		BitcoinExchange& operator=(const BitcoinExchange& other);
		~BitcoinExchange();
		float getClosestValue(const std::string& date) const;
		static std::pair<std::string, float> parseInputLine(const std::string& line);
		int convertDateToInt(const std::string& dateStr) const;
		
	private:
		std::map<int, float> btcDB;

		void loadBitcoinDB(const std::string& filePath);
		std::map<std::string, float> exchangeRates;
};

#endif
