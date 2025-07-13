/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 11:42:35 by dtanski           #+#    #+#             */
/*   Updated: 2025/07/13 15:49:41 by dtanski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"
#include "../inc/Point.hpp"
#include <iostream>

int main( void ) {
Point	edge1(2,3);
Point	edge2(3,4);
Point	edge3(5,6);

Point	point(2.5, 3.5);

Point	edge4(1,1);
Point	edge5(4,2);
Point	edge6(3,3);

Point	point2(2, 3);

Point a(0, 0);
Point b(4, 0);  
Point c(2, 3);
Point inside(2, 1);    

std::cout << "Point inside triangle: " << bsp(a, b, c, inside) << std::endl;  // Powinno być 1
std::cout << "Point outside triangle: " << bsp(edge1, edge2, edge3, point) << std::endl;
std::cout << "Point outside triangle: " << bsp(edge4, edge5, edge6, point2) << std::endl;
return 0;
}