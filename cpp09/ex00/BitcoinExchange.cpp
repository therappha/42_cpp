#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{

}

BitcoinExchange::~BitcoinExchange()
{

}

void BitcoinExchange::loadDatabase(std::ifstream& database)
{
    std::string    dateStr;
    std::string    valueStr;
    float          value;    
    
    std::getline(database, dateStr);
    if (dateStr != "date,exchange_rate")
        throw std::runtime_error("Invalid database, file should start with date,exchange_rate ");
    dateStr.clear();

    while ((std::getline(database, dateStr, ',') && std::getline(database, valueStr)))
    {
        value = std::strtod(valueStr.c_str(), NULL);
        int year = 0;
        int month = 0;
        int day = 0;

        std::cout << dateStr << std::endl;
        if (sscanf(dateStr.c_str(), "%d-%d-%d", &year, &month, &day) != 3)
        {   
            throw std::runtime_error("invalid date");
        }
        _database[dateStr] =  value;
    }

}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other)
{
    *this = other;
}

void    BitcoinExchange::parseInput(std::ifstream& database)
{
    //to do
    (void)database;
}

BitcoinExchange& BitcoinExchange::operator = ( const BitcoinExchange& other)
{
    if (this != &other)
    {
        this->_database = other._database;
    }
    return (*this);
}

