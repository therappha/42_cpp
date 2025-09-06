#pragma once

#include <map>
#include <string>
#include <fstream>

class BitcoinExchange
{
    private:
        std::map<std::string, float> database;
       
        BitcoinExchange(); //Default Constructor

    public:
        BitcoinExchange(std::ifstream& datafile);
        ~BitcoinExchange(); //Default Destructor
        BitcoinExchange(const BitcoinExchange& other); //Copy Constructor
        BitcoinExchange& operator = (const BitcoinExchange& other); //Copy Assigment Operator



};