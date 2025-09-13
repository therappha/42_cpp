#include <iostream>
#include "RPN.hpp"


int main(int ac, char **av)
{
    if (ac != 2 )
    {
        std::cerr << "Error" << std::endl;
        return (EXIT_FAILURE);
    }
    std::string expression = av[1];
    if (expression.empty())
    {
        std::cerr << "Error" << std::endl;
        return (EXIT_FAILURE);
    }

    RPN calculator;

    try
    {
        calculator.calculate(expression);
    }
    catch(std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
        return (EXIT_FAILURE);
    }
    return (EXIT_SUCCESS);
}