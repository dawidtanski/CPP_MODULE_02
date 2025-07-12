/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 20:10:11 by dtanski           #+#    #+#             */
/*   Updated: 2025/07/10 16:12:07 by dtanski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					_fixed_point_number;
		static const int	_fractional_bits;
	public:
		Fixed();
		Fixed(const int num);
		Fixed(const float num);
		Fixed(const Fixed &src);
		Fixed& operator=(const Fixed& src);
		~Fixed();
		
		int 	getRawBits(void) const;
		void 	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		// In class method there's always hidden parameter this

		// Comparison operators
		bool operator>(const Fixed& other) const;
		bool operator<(const Fixed& other) const;
		bool operator>=(const Fixed& other) const;
		bool operator<=(const Fixed& other) const;
		bool operator==(const Fixed& other) const;
		bool operator!=(const Fixed& other) const;

		// Arithmetic operators
		Fixed	operator+(const Fixed& other) const;
		Fixed	operator-(const Fixed& other) const;
		Fixed	operator*(const Fixed& other) const;
		Fixed	operator/(const Fixed& other) const;

		// Indrement/ decrement operators
		Fixed& operator++();
		Fixed& operator--();
		// Dummy parameter (int) to identify function
		Fixed operator++(int);
		Fixed operator--(int);

		// Static min/max member functions
		// With static member function you don't need to create object -- Fixed::min(a, b);
		// There're special functions without 'this' parameter
		// They still have access to private members
		static Fixed& min(Fixed &fixed1, Fixed &fixed2);
		static const Fixed& min(const Fixed &fixed1, const Fixed &fixed2);
		static Fixed& max(Fixed &fixed1, Fixed &fixed2);
		static const Fixed& max(const Fixed &fixed1, const Fixed &fixed2);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif