# Exercise: Bitcoin Exchange 💱
## Objective of the Exercise 🎯
Develop a C++ program that uses historical exchange rate data to convert amounts given in input data, by multiplaying the provided value with the closest preceding date’s exchange rate.

## Key Components 🧩
### 1. BitcoinExchange Class:
Purpose: Manages the conversion of Bitcoin values using historical exchange rate data.

#### Key Methods:
- loadBitcoinDB(): Loads exchange rate data from a .csv file into a map container.
- parseInputLine(): Parses input lines to extract date and value.
- getClosestValue(): Finds the closest preceding exchange rate using the input date.

### 2. Data Structures:
std::map<std::string, float> exchangeRates: Holds date (string) and exchange rate (float) pairs for look-up and calculation.

### 3. Utility Functions:
convertDateToInt(): Although utilized earlier, the final implementation did not employ this due to keeping dates as strings for simplified comparisons.

## How It Works 🛠️
### 1. Loading Data:
Exchange Rate Data: Loaded from a .csv file and stored in a std::map where each date is associated with an exchange rate.

### 2. Parsing & Calculating:
Input data, consisting of a date and a value, is parsed line by line.
For each line, the closest preceding date’s exchange rate is found and used to multiply the provided value.
Results are outputted in a structured format.

### 3. Exception Handling:
Various checks and exception handling mechanisms ensure the reliability of data parsing and calculations.

## In Simple Terms 🎓
Imagine having an old ledger that documents the exchange rate of Bitcoin for particular dates. You’re then given a list of amounts with corresponding dates and tasked to calculate the equivalent value by using the closest preceding exchange rate found in your ledger. If the exact date is not present, you will choose the exchange rate of the most recent date before it. This C++ program automates this process, managing the historical data and performing calculations based on the input.