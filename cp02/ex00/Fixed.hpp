/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 00:34:29 by aramon            #+#    #+#             */
/*   Updated: 2023/09/25 01:00:53 by aramon           ###   ########.fr       */
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
		Fixed(Fixed const &fixed);
		Fixed &operator = (Fixed const &fixed);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		~Fixed();
};
