/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 20:10:11 by dtanski           #+#    #+#             */
/*   Updated: 2025/07/08 12:48:00 by dtanski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int					_fixed_point_number;
		static const int	_fractional_bits;
	public:
		Fixed();
		Fixed(const Fixed &src);
		Fixed& operator=(const Fixed& src);
		~Fixed();
		
		int getRawBits(void) const;
		void setRawBits(int const raw);
};



#endif