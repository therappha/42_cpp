/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 20:23:44 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/05/09 22:00:09 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(Fixed(0)), y(Fixed(0))
{

}
Point::~Point()
{
	
}
Point::Point(const float float_x, const float float_y) : x(Fixed(float_x)), y(Fixed(float_y))
{
}
Point::Point(const Point& other) : x(other.get_x()), y(other.get_y())
{
}

bool	Point::operator == (const Point& other)
{
	return (this->get_x() == other.get_x() && this->get_y() == other.get_y());
}

bool	Point::operator != (const Point& other)
{
	return (!(*this == other));
}

Point& Point::operator = (const Point& other)
{
	(void)other;
	return (*this);
}
const Fixed Point::get_x() const
{
	return (this->x);
}

const Fixed Point::get_y() const
{
	return (this->y);
}


/*• Private members:
◦ A Fixed const attribute x.
◦ A Fixed const attribute y.
◦ Anything else useful.
• Public members:
◦ A default constructor that initializes x and y to 0.
◦ A constructor that takes two constant floating-point numbers as parameters.
It initializes x and y with those parameters.
◦ A copy constructor.
◦ A copy assignment operator overload.
◦ A destructor.
◦ Anything else usef*/
