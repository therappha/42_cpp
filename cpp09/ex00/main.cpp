#include <iostream>
#include <fstream>
#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    std::ifstream dataFile;
    std::ifstream inputFile;
    BitcoinExchange exchange;

    if (ac != 2)
    {
        std::cerr << "No input File, usage: ./btc input_file" << std::endl;
        return (EXIT_FAILURE);
    }

    dataFile.open("data.csv", std::ios::in);
    if (!dataFile)
    {
        std::cerr << "Could not open database file, please insert data.csv on the root!" << std::endl;
        return (EXIT_FAILURE);
    }
    inputFile.open(av[1], std::ios::in);
    {
        if (!inputFile)
        {
            std::cerr << "Could not open input file" << std::endl;
            return (EXIT_FAILURE);
        }
    }

    //Load database
    try
    {
      exchange.loadDatabase(dataFile);
    }
    catch(std::exception &e)
    {
        std::cerr << "Could not load database because: " << e.what() << std::endl;
        return (EXIT_FAILURE);
    }

    //Parse the input
    try
    {
        exchange.parseInput(inputFile);
    }
    catch (std::exception &e)
    {
        std::cerr << "Critical Error: " << e.what() << std::endl;
    }
    return(EXIT_SUCCESS);
}
