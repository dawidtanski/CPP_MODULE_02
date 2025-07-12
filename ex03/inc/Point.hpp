/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 16:46:20 by dtanski           #+#    #+#             */
/*   Updated: 2025/07/10 16:57:39 by dtanski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

class Point
{
	private:
		const Fixed x;
		const Fixed y;
	public:
	// Constructor
		Point();
		Point(const float num1, const float num2);
	// Copy constructor
		Point(const Point &src);
	// Copy assignment operator overload
		Point& operator=(const Point& src);
	// Destructor
		~Point();
};

bool bsp( Point const a, Point const b, Point const c, Point const point);