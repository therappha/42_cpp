#pragma once

#include <map>
#include <string>
#include <fstream>
#include <iostream>
#include <stdexcept>
#include <sstream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
#include <cstdio>

class BitcoinExchange
{
    private:
        std::map<std::string, float> _database;

    public:
        BitcoinExchange(); //Default Constructor here because it will not be instantiated
        void    loadDatabase(std::ifstream& database);
        void    parseInput(std::ifstream& database);
        ~BitcoinExchange(); //Default Destructor
        BitcoinExchange(const BitcoinExchange& other); //Copy Constructor
        BitcoinExchange& operator = (const BitcoinExchange& other); //Copy Assigment Operator   
        bool isValidDate(const std::string& date);
};