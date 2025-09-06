#include "RPN.hpp"

RPN::RPN() { }

RPN::RPN(const RPN& other)
{
    *this = other;
}

RPN& RPN::operator=(const RPN& other)
{
    if (this != &other)
    {
        //just do nothing there is nothing to assign;
    }   
    return (*this);
}
RPN::~RPN()
{
    // do nothing;
}

int RPN::isValidNumber(const std::string& num)
{
    if (num.length() != 1)
    {
        return (0);
    }

    if (num.at(0) >= '0' && num.at(0) <= '9')
    {
        return (1);
    }
    return (0);
}
int RPN::isValidOperator(const std::string& charOperator)
{
    if (charOperator.length() != 1)
    {
        throw std::invalid_argument("Invalid Input");
    }
    char operators[4] = {'+', '-', '/', '*'};

    for (int i = 0; i < 4; i++)
    {
        if (charOperator.at(0) == operators[i])
        {
            return (1);
        }
    }
    throw std::invalid_argument("Invalid Input");
}
void    RPN::calculate(const std::string& expression)
{
    int             stack_size = 0;
    std::stack<int> stack;
    std::string token;
    std::stringstream ss(expression);

    while (1)
    {
        if (!getline(ss, token, ' '))
        {
            break;
        }
        if (token.length() > 1 )
        {
            throw std::invalid_argument("2 char argument");
        }
        if (isValidNumber(token))
        {
            stack.push(token.at(0) - '0');
            stack_size++;
        }
        else if (isValidOperator(token))
        {
            if (stack_size < 2)
            {
                throw std::invalid_argument("Operator called with 1 number on stack");
            }
            int b = stack.top(); stack.pop();
            int a = stack.top(); stack.pop();
            stack_size--;
            if (token == "+")
            {
                stack.push( a + b);
            }
            if (token == "-")
            {
                stack.push( a - b);
            }
            if (token == "*")
            {
                stack.push( a * b);
            }
            if (token == "/")
            {
                if (b == 0)
                {
                    throw std::runtime_error("division by zero");
                }
                stack.push( a / b);
            }
        }

    }
    if (stack_size > 1)
    {
         throw std::runtime_error("More than one number on stack");
    }
    std::cout << stack.top() << std::endl;



}   