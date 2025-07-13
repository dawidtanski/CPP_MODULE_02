/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 16:59:24 by dtanski           #+#    #+#             */
/*   Updated: 2025/07/13 14:57:28 by dtanski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Point.hpp"

/*
a, b, c: The vertices of our beloved triangle.
•point: The point to check.
•Returns: True if the point is inside the triangle. False otherwise.
Thus, if the point is a vertex or on edge, it will return False.*/


//cross product method
//AP x AB
//BP x BC
//CP x CA
// Every of cross product has to be same sign or be zero(in this case point lies in the triangle's side)

//cross product = v1.x * v2.y - v1.y * v2.x

static Fixed	crossProduct(Point const &origin, Point const& end1, Point const& end2)
{
	Fixed v1_x = end1.getX() - origin.getX();
	Fixed v2_x = end2.getX() - origin.getX();
	Fixed v1_y = end1.getY() - origin.getY();
	Fixed v2_y = end2.getY() - origin.getY();

	return (v1_x * v2_y - v1_y * v2_x);
}

static int	getSign(Fixed value)
{
	if (value > Fixed(0))
		return (1);
	else if (value < Fixed(0))
		return (-1);
	else
		return (0);
}




bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed crossP1 = crossProduct(a, point, b);
	Fixed crossP2 = crossProduct(b, point, c);
	Fixed crossP3 = crossProduct(c, point, a);

	int	sign1 = getSign(crossP1);
	int	sign2 = getSign(crossP2);
	int	sign3 = getSign(crossP3);

	if (sign1 == 0 || sign2 == 0 || sign3 == 0)
		return (false);
	return ((sign1 == sign2) && (sign2 == sign3));
}