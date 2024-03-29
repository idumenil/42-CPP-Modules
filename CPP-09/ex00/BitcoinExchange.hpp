#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <algorithm>

class BitcoinExchange {

    public:
        BitcoinExchange();
        BitcoinExchange(const std::string &filename);
        BitcoinExchange(BitcoinExchange const & obj);
        BitcoinExchange & operator=(BitcoinExchange const & rhs);
        ~BitcoinExchange();

        void ProcessInput(const std::string &filename);

    private:
        std::map<std::string, double> _data;
        double getExchangeRate(const std::string &date);
        bool checkDate(const std::string &date);
        bool checkValue(const double &value);
};
