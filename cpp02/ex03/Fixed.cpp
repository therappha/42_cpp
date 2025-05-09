/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 18:02:14 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/05/09 19:35:35 by rafaelfe         ###   ########.fr       */
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
}

Fixed::Fixed(const Fixed& other)
{
	*this = other;
}
Fixed::Fixed(const int integer)
{
	const int	abs_max = (1 << (32 - this->_fractional_bits));

	this->_value = 0;
	if (integer < (abs_max) && integer > -(abs_max))
		this->_value |= integer << this->_fractional_bits;
}

Fixed::Fixed(const float floating_point)
{

	this->_value = roundf(floating_point * (float)(1 << this->_fractional_bits));
}

Fixed::~Fixed()
{
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
	return (this->_value);
}

void Fixed::setRawBits( int const raw )
{
	this->_value = raw;
}

/******************************************************************/
/**************************OPERATORS*******************************/
/******************************************************************/

Fixed &Fixed::operator = (const Fixed& other)
{
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
	Fixed newfixed;

	newfixed.setRawBits(this->getRawBits() + other.getRawBits());
	return (newfixed);
}
Fixed Fixed::operator - (const Fixed& other) const
{
	Fixed newfixed;

	newfixed.setRawBits(this->getRawBits() - other.getRawBits());
	return (newfixed);
}
Fixed Fixed::operator * (const Fixed& other) const
{
	Fixed newfixed;
	long long temp = ((long long)this->getRawBits() * (long long)other.getRawBits());

	temp >>= this->_fractional_bits;
	newfixed.setRawBits((int)temp);
	return (newfixed);
}
Fixed Fixed::operator / (const Fixed& other) const
{
	Fixed newfixed;
	long long temp = (((long long)this->getRawBits() << this->_fractional_bits) / (long long)other.getRawBits());

	newfixed.setRawBits((int)temp);
	return (newfixed);
}

Fixed& Fixed::operator ++ (void)
{
	this->_value++;
	return (*this);
}
Fixed Fixed::operator ++ (int)
{
	Fixed newfixed;

	newfixed.setRawBits(this->getRawBits());

	this->_value++;
	return (newfixed);
}

Fixed& Fixed::operator -- (void)
{
	this->_value--;
	return (*this);
}
Fixed Fixed::operator -- (int)
{
	Fixed newfixed;

	newfixed.setRawBits(this->getRawBits());

	this->_value--;
	return (newfixed);
}
