/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 21:09:53 by dtanski           #+#    #+#             */
/*   Updated: 2025/07/10 16:30:15 by dtanski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

// Assigning value to static int
const int Fixed::_fractional_bits = 8;

// Default constructor
Fixed::Fixed() : _fixed_point_number(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

// Constructor taking int as argument -- ex01
Fixed::Fixed(const int num) : _fixed_point_number(num << _fractional_bits)
{
	// std::cout << "Int constructor called" << std::endl;
}

// Constructor taking float as argument -- ex01
Fixed::Fixed(const float num) : _fixed_point_number(roundf(num * (1 << _fractional_bits)))
{
	// std::cout << "Float constructor called" << std::endl;
}


// Destructor
Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

// Getter
int	Fixed::getRawBits( void ) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed_point_number);
}

// Setters
void	Fixed::setRawBits( int const raw)
{
	this->_fixed_point_number = raw;
}

// c++ typecasting checks if it's even possible before doing this
float	Fixed::toFloat(void) const
{
	return (static_cast<float>(_fixed_point_number) / (1 << _fractional_bits));
}

int	Fixed::toInt(void) const
{
	return (static_cast<int>(_fixed_point_number >> 8));
}

// Copy constructor
Fixed::Fixed(const Fixed &src) : _fixed_point_number(src._fixed_point_number)
{
	// std::cout << "Copy constructor called" << std::endl;
}

// Copy constructor - in this implementation it runs assignment operator
// Fixed::Fixed(const Fixed &src)
// {
// 	std::cout << "Copy constructor called" << std::endl;
// 	*this = src;
// }

// Copy assignment operator ovwerload
// Fixed& Fixed::operator=(const Fixed& src)
// {
// 	std::cout << "Copy assignment operator called" << std::endl;
// 	if (this != &src)
// 		this->_fixed_point_number = src.getRawBits();
// 	return *this;
// }

Fixed& Fixed::operator=(const Fixed& src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->_fixed_point_number = src._fixed_point_number;
	return *this;
}

// Operators overloading

// cout overloading
std::ostream & operator<<(std::ostream& os, const Fixed &fixed)
{
	return (os << fixed.toFloat() << std::endl);
}

// Comparison operators
bool Fixed::operator>(const Fixed& other) const
{
	return (_fixed_point_number > other._fixed_point_number);
}

bool Fixed::operator<(const Fixed& other) const
{
	return (_fixed_point_number < other._fixed_point_number);

}
bool Fixed::operator>=(const Fixed& other) const
{
	return (_fixed_point_number >= other._fixed_point_number);
}

bool Fixed::operator<=(const Fixed& other) const
{
	return (_fixed_point_number <= other._fixed_point_number);
}

bool Fixed::operator==(const Fixed& other) const
{
	return (_fixed_point_number == other._fixed_point_number);
}

bool Fixed::operator!=(const Fixed& other) const
{
	return (_fixed_point_number != other._fixed_point_number);
}

// Arithmetic operators

Fixed Fixed::operator+(const Fixed& other) const
{
	Fixed	result;
	
	result._fixed_point_number = _fixed_point_number + other._fixed_point_number;
	return (result);
}

Fixed Fixed::operator-(const Fixed& other) const
{
	Fixed	result;
	
	result._fixed_point_number = _fixed_point_number - other._fixed_point_number;
	return (result);
}

Fixed Fixed::operator*(const Fixed& other) const
{
	Fixed	result;
	
	result._fixed_point_number = (_fixed_point_number * other._fixed_point_number) >> _fractional_bits;
	return (result);
}

Fixed Fixed::operator/(const Fixed& other) const
{
		Fixed	result;
	
	result._fixed_point_number = (_fixed_point_number / other._fixed_point_number) << (_fractional_bits);
	return (result);
}

// Increment/ decrement operators

// Sript wanted us to do bugs for the second time
Fixed& Fixed::operator++()
{
	// _fixed_point_number += (1 << _fractional_bits);
	_fixed_point_number += 1;
	return *this;
}

// Sript wanted us to do bugs for the second time
Fixed& Fixed::operator--()
{
	// _fixed_point_number -= (1 << _fractional_bits);
	_fixed_point_number -= 1;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	//*this += (1 << _fractional_bits)
	++(*this);
	return (temp);
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	//*this += (1 << _fractional_bits)
	--(*this);
	return (temp);
}

// Static member functions
Fixed& Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
	return (fixed1 < fixed2 ? fixed1 : fixed2);
}

const Fixed& Fixed::min(const Fixed &fixed1, const Fixed &fixed2)
{
	return (fixed1 < fixed2 ? fixed1 : fixed2);
}

Fixed& Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
	return (fixed1 > fixed2 ? fixed1 : fixed2);
}

const Fixed& Fixed::max(const Fixed &fixed1, const Fixed &fixed2)
{
	return (fixed1 > fixed2 ? fixed1 : fixed2);
}