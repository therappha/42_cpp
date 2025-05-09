/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 20:00:54 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/05/09 22:04:29 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
bool bsp( Point const a, Point const b, Point const c, Point const point);

//a b c
//d e f
//g h i

// 1	1	1
// a.x	b.x	c.x
// a.y	b.y	c.y
//leibniz formula aei + bfg + cdh - aeg - bdi - cfh


Fixed calculate_determinant(Point a, Point b, Point c)
{
	Fixed d = a.get_x();
	Fixed e = b.get_x();
	Fixed f = c.get_x();
	Fixed g = a.get_y();
	Fixed h = b.get_y();
	Fixed i = c.get_y();

	return (Fixed(e * i + f * g + d * h - e * g - d * i - f * h));

}


Fixed calculate_area(Point const a, Point const b, Point const c)
{
	Fixed determinant;

	determinant = calculate_determinant(a, b, c );

	if (determinant < Fixed(0))
		determinant = determinant * -1;

	return (determinant / 2);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed triangle_area;
	Fixed area_a;
	Fixed area_b;
	Fixed area_c;
	Fixed total_area;
	triangle_area = calculate_area(a, b, c);

	area_a = calculate_area(point, a, b);
	area_b = calculate_area(point, b, c);
	area_c = calculate_area(point, c, a);
	if (area_a == Fixed(0) || area_b == Fixed(0) || area_c == Fixed(0))
		return (false);
	total_area = area_a + area_b + area_c;
	if (total_area == triangle_area)
		return true;
	else
		return false;

}
