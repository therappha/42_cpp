/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 18:01:57 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/05/09 19:05:10 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed{

private:
	int					_value;
	static const int	_fractional_bits;

public:
	Fixed(); 								// A default constructor
	Fixed(const Fixed& other);				// A copy constructor.
	Fixed(const int integer);				//A constructor that takes a constant integer as a parameter.
	Fixed(const float floating_point);		//A constructor that takes a constant floating point as a parameter.
	~Fixed(); 								// A destructor.

	Fixed& operator = (const Fixed& other);	// A copy assignment operator overload.
	float toFloat( void ) const;
	int toInt( void ) const;
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};
std::ostream& operator<<(std::ostream& out, const Fixed& object); 	// Overload insertion operator

#endif
/*
Add the following public constructors and public member functions to your class:
• A constructor that takes a constant integer as a parameter.

• A constructor that takes a constant floating-point number as a parameter.
It converts it to the corresponding fixed-point value. The fractional bits value
should be initialized to 8, like in exercise 00.
• A member function float toFloat( void ) const;
that converts the fixed-point value to a floating-point value.
• A member function int toInt( void ) const;
that converts the fixed-point value to an integer value.
And add the following function to the Fixed class files:
• An overload of the insertion («) operator that inserts a floating-point representation
of the fixed-point number into the output stream object passed as a parameter.
*/
