/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 21:09:53 by dtanski           #+#    #+#             */
/*   Updated: 2025/07/08 19:49:25 by dtanski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

// Assigning value to static int
const int Fixed::_fractional_bits = 8;

// Default constructor
Fixed::Fixed() : _fixed_point_number(0)
{
	std::cout << "Default constructor called" << std::endl;
}

// Destructor
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

// Getter
int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed_point_number);
}

// Setters
void	Fixed::setRawBits( int const raw)
{
	this->_fixed_point_number = raw;
}

// Copy constructor
// Fixed::Fixed(const Fixed &src) : _fixed_point_number(src._fixed_point_number)
// {
// 	std::cout << "Copy constructor called" << std::endl;
// }

// Copy constructor - in this implementation it runs assignment operator
Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

// Copy assignment operator ovwerload
Fixed& Fixed::operator=(const Fixed& src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->_fixed_point_number = src.getRawBits();
	return *this;
}