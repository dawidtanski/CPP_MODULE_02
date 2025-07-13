/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 16:59:30 by dtanski           #+#    #+#             */
/*   Updated: 2025/07/13 14:27:21 by dtanski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Point.hpp"
#include "../inc/Fixed.hpp"

Point::Point(): x(0), y(0){}

Point::Point(const float num1, const float num2): x(num1), y(num2){}

Point::Point(const Point &src): x(src.x), y(src.y){}

// It's impossible to use properly assignment overloading to const values
Point& Point::operator=(const Point& src)
{
	(void)src;
	return *this;
}

Point::~Point(){};

Fixed Point::getX() const
{
	return (x);
}
Fixed Point::getY() const
{
	return (y);
}

