/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 18:02:14 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/05/08 22:13:07 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

const int	Fixed::_fractional_bits = 8;

/******************************************************************/
/**************************Constructors****************************/
/******************************************************************/

Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}
Fixed::Fixed(const int integer)
{
	const int	abs_max = (1 << (32 - this->_fractional_bits));

	std::cout << "Int constructor called" << std::endl;
	this->_value = 0;
	if (integer < (abs_max) && integer > -(abs_max))
		this->_value|= integer << this->_fractional_bits;
}

Fixed::Fixed(const float floating_point)
{
	std::cout << "Float constructor called" << std::endl;

	this->_value = roundf(floating_point * (float)(1 << this->_fractional_bits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

/******************************************************************/
/****************************METHODS*******************************/
/******************************************************************/

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a > b)
	{
		return (b);
	}
	return (a);
}

Fixed& Fixed::max(Fixed&a, Fixed& b)
{
	if (a < b)
	{
		return (b);
	}
	return (a);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a > b)
	{
		return (b);
	}
	return (a);
}


const Fixed& Fixed::max(const Fixed&a, const Fixed& b)
{
	if (a < b)
	{
		return (b);
	}
	return (a);
}

float Fixed::toFloat( void ) const
{
	return ((float)this->_value / (float)(1 << this->_fractional_bits));
}

int Fixed::toInt( void ) const
{
	return ((this->_value) >> (this->_fractional_bits));
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

/******************************************************************/
/**************************OPERATORS*******************************/
/******************************************************************/

Fixed &Fixed::operator = (const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_value = other.getRawBits();
	}
	return (*this);
}

std::ostream& operator<<(std::ostream& out, const Fixed& object)
{
	out << object.toFloat();
	return (out);
}

bool Fixed::operator > (const Fixed& other) const
{
	return (this->_value > other.getRawBits());
}

bool Fixed::operator < (const Fixed& other) const
{
	return (this->_value < other.getRawBits());
}

bool Fixed::operator >= (const Fixed& other) const
{
	return (this->_value >= other.getRawBits());
}

bool Fixed::operator <= (const Fixed& other) const
{
	return (this->_value <= other.getRawBits());
}

bool Fixed::operator == (const Fixed& other) const
{
	return (this->_value == other.getRawBits());
}

bool Fixed::operator != (const Fixed& other) const
{
	return (this->_value != other.getRawBits());
}

Fixed Fixed::operator + (const Fixed& other) const
{
	return (Fixed(this->getRawBits() + other.getRawBits()));
}
Fixed Fixed::operator - (const Fixed& other) const
{
	return (Fixed(this->getRawBits() - other.getRawBits()));
}
Fixed Fixed::operator * (const Fixed& other) const
{

}
Fixed Fixed::operator / (const Fixed& other) const
{

}
