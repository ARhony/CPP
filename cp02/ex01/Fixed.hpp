/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 00:34:29 by aramon            #+#    #+#             */
/*   Updated: 2023/09/26 00:23:43 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
	private:

		int value;
		static const int fractionalBits = 8;

	public:

		Fixed();
		Fixed(int const n);
		Fixed(float const n);
		Fixed(Fixed const &f);

		Fixed& operator=(Fixed const &f) throw();

		int getRawBits(void) const;
		void setRawBits(int const r);

		float toFloat(void) const;
		int toInt(void) const;

		~Fixed();

};

std::ostream& operator << (std::ostream &out, Fixed const &fixed);
