/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 20:20:32 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/05/09 21:59:13 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point{

private:

	const Fixed x;
	const Fixed y;
	Point& operator = (const Point& other);

public:

	//constructors
	Point();
	Point(const float float_x, const float float_y);
	Point(const Point& other);
	~Point();

	//operators
	bool	operator == (const Point& other);
	bool	operator != (const Point& other);

	//methods
	const Fixed get_x() const;
	const Fixed get_y() const;
};


#endif


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
