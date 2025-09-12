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
        if (isValidDate(dateStr))
    {
        std::cout << dateStr << "is valid" << std::endl;
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

bool BitcoinExchange::isValidDate(const std::string& date)
{
    struct tm datetime;

    int year = 0;
    int month = 0;
    int day = 0;

    std::cout << date << std::endl;
    if (sscanf(date.c_str(), "%d-%d-%d\n", &year, &month, &day) != 3)
    {   
     
      throw std::runtime_error("invalid date");
    }

    datetime.tm_year = year - 1900; // Number of years since 1900
    datetime.tm_mon = month - 1; // Number of months since January
    datetime.tm_mday = day;
    datetime.tm_hour = 12;
    datetime.tm_min = 30;
    datetime.tm_sec = 1;

    datetime.tm_isdst = -1;

    time_t t = mktime(&datetime);

    if (t == -1 )
    {
        throw std::runtime_error("invalid date");
    }
    if (datetime.tm_year != year - 1900|| datetime.tm_mon != month - 1 || datetime.tm_mday != day)
    {
        throw std::runtime_error("invalid date");
    }

   return (1);
}