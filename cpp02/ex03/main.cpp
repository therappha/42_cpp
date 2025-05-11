/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 21:49:08 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/05/09 22:15:26 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int	main(void)
{
	Point a(5, 0);
	Point b(2, 3);
	Point c(7, 5);

	Point p (6, 2);

	std::cout << "is point (" << p.get_x() <<", " << p.get_y() << ") inside triangle?";
	if (bsp(a, b, c, p))
	{
		std::cout << " >> YES" << std::endl;
	}
	else
	{
		std::cout << " >> NO" << std::endl;
	}
}
