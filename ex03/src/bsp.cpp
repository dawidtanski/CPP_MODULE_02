/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 16:59:24 by dtanski           #+#    #+#             */
/*   Updated: 2025/07/10 22:41:13 by dtanski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/*
a, b, c: The vertices of our beloved triangle.
•point: The point to check.
•Returns: True if the point is inside the triangle. False otherwise.
Thus, if the point is a vertex or on edge, it will return False.*/


//vector product method
//AP x AB
//BP x BC
//CP x CA

int countSin(int line1, int line2)
{
	
}

// Every of vector product has to be same sign or be zero(in this case point lies in the triangle's side)
bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	if ()
}