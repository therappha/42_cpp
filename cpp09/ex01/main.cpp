#include <iostream>
#include "RPN.hpp"

int main(int ac, char **av)
{
    if (ac != 2 )
    {
        std::cerr << "Error" << std::endl;
    }
    std::string expression = av[1];
    if (expression.empty())
    {
        std::cerr << "Error" << std::endl;
    }

    RPN calculator;

    try
    {
        calculator.calculate(expression);
    }
    catch(std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

}