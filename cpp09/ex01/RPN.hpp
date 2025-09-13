#pragma once

#include <string>
#include <stack>
#include <stdexcept>
#include <sstream>
#include <iostream>
#include <cstdlib> // exit_sucess

class RPN 
{
    public:
        RPN(); //default constructor;
        RPN(const RPN& other); // copy constructor;
        RPN& operator=(const RPN& other); // copy assigment operator;
        ~RPN(); // default constructor;

        int isValidNumber(const std::string& num);
        int isValidOperator(const std::string& charOperator);
        void    calculate(const std::string& expression);
};  