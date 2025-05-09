/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 18:01:57 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/05/09 20:29:49 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

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

	// Comparison operators
	bool operator > (const Fixed& other) const;
	bool operator < (const Fixed& other) const;
	bool operator >= (const Fixed& other) const;
	bool operator <= (const Fixed& other) const;
	bool operator == (const Fixed& other) const;
	bool operator != (const Fixed& other) const;

	//arithmetic operators:
	Fixed operator + (const Fixed& other) const;
	Fixed operator - (const Fixed& other) const;
	Fixed operator * (const Fixed& other) const;
	Fixed operator / (const Fixed& other) const;

	Fixed& operator ++ (void); // pre increment operator
	Fixed operator ++ (int); // post increment operator
	Fixed& operator -- (void); // pre decrement operator
	Fixed operator -- (int); // post decrement operator
	Fixed& operator = (const Fixed& other);

	// Methods
	float toFloat( void ) const;
	int toInt( void ) const;
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	static Fixed& min(Fixed& a, Fixed& b);
	static Fixed& max(Fixed&a, Fixed& b);
	static const Fixed& min(const Fixed& a, const Fixed& b);
	static const Fixed& max(const Fixed&a, const Fixed& b);

};

std::ostream& operator<<(std::ostream& out, const Fixed& object); 	// Overload insertion operator

/*Add public member functions to your class to overload the following operators:
• The 6 comparison operators: >, <, >=, <=, ==, and !=.
• The 4 arithmetic operators: +, -, *, and /.
• The 4 increment/decrement (pre-increment and post-increment, pre-decrement and
post-decrement) operators, which will increase or decrease the fixed-point value by
the smallest representable ϵ, such that 1 + ϵ > 1.
Add these four public overloaded member functions to your class:
• A static member function min that takes two references to fixed-point numbers as
parameters, and returns a reference to the smallest one.
• A static member function min that takes two references to constant fixed-point
numbers as parameters, and returns a reference to the smallest one.
• A static member function max that takes two references to fixed-point numbers as
parameters, and returns a reference to the greatest one.
• A static member function max that takes two references to constant fixed-point
numbers as parameters, and returns a reference to the greatest one. */

#endif

