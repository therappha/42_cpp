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
    double          value;
    std::stringstream ss;

    std::getline(database, dateStr);
    if (dateStr != "date,exchange_rate")
        throw std::runtime_error("Invalid database, file should start with 'date,exchange_rate'. ");
    dateStr.clear();

    while ((std::getline(database, dateStr, ',') && std::getline(database, valueStr)))
    {

        if (valueStr == "\n")
        {
            throw std::runtime_error("Invalid database, a invalid date has been detected. ");
        }
        std::stringstream ss(valueStr);
        value = 0;
        if (!(ss >> value))
        {
            throw std::runtime_error("Invalid database, a invalid date has been detected. ");
        }
        std::string clearstr;
        if (ss >> clearstr)
        {
            throw std::runtime_error("Invalid database, a invalid date has been detected. ");
        }

        if (dateStr.length() == 10 && isValidDate(dateStr) && value >= 0 && value < 2147483648)
        {
             _database[dateStr] =  value;
        }
        else
        {
            throw std::runtime_error("Invalid database, a invalid date has been detected. ");
        }
    }
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other)
{
    *this = other;
}

void    BitcoinExchange::parseInput(std::ifstream& input)
{
    std::string    dateStr;
    std::string     line;

    std::map<std::string, double>::iterator it;

    std::getline(input, dateStr);
    if (dateStr != "date | value")
        throw std::runtime_error("Invalid database, file should start with 'date | value'. ");
    dateStr.clear();

    while (std::getline(input, dateStr))
    {
        int num;
        double          value;
        try
        {
            if (sscanf(dateStr.c_str(), "%d-%d-%d | %lf\n", &num, &num, &num, &value ) != 4)
            {
                throw std::runtime_error("bad input => " + dateStr);
            }
            if (value < 0)
            {
                throw std::runtime_error("not a positive number");
            }
            if (value > 2147483647.0)
            {
                throw std::runtime_error("too big of a number");
            }
            else
            {
                std::stringstream ss(dateStr);
                std::getline(ss, line, ' ');
                if (line.length() != 10 || !isValidDate(line))
                {
                    throw std::runtime_error("invalid date => " + line);
                }
                it = _database.lower_bound(line);
                if (line != it->first && it != _database.begin())
                {
                    it--;
                }
                if (it == _database.end())
                {
                    if (it != _database.begin())
                        it--;
                }
                if (it == _database.begin() && line != _database.begin()->first)
                {
                    throw std::runtime_error("No bitcoin value available for this date.");
                }
                std::cout << line << " => " << value << " = "  << (value * it->second) <<  std::endl;
            }
        }
        catch(std::exception& e)
        {
            std::cerr << "Error: " << e.what() << std::endl;
        }
    }
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

    if (sscanf(date.c_str(), "%d-%d-%d\n", &year, &month, &day) != 3)
    {
      return (0);
    }
    if (year < 1901)
    {
        return (0);
    }

    datetime.tm_year = year - 1900;
    datetime.tm_mon = month - 1;
    datetime.tm_mday = day;
    datetime.tm_hour = 12;
    datetime.tm_min = 30;
    datetime.tm_sec = 1;

    time_t t = mktime(&datetime);

    if (t == -1 )
    {
        return (0);
    }
    if (datetime.tm_year != year - 1900|| datetime.tm_mon != month - 1 || datetime.tm_mday != day)
    {
        return (0);
    }

   return (1);
}

