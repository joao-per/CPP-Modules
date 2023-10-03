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
		~BitcoinExchange();
		BitcoinExchange(const std::string& dbPath);
		float getClosestValue(const std::string& date) const;
		static std::pair<std::string, float> parseInputLine(const std::string& line);
		
	private:
		std::map<int, float> btcDB;

		int convertDateToInt(const std::string& dateStr) const;
		void loadBitcoinDB(const std::string& filePath);
};

#endif
