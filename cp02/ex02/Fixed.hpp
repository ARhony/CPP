/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 00:34:29 by aramon            #+#    #+#             */
/*   Updated: 2023/09/26 00:39:13 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
	private:

		int					value;
		static const int 	fractionalBits = 8;

	public:

		Fixed();
		Fixed(int const value);
		Fixed(float const value);
		Fixed(Fixed const &fixed);

		Fixed				&operator = (Fixed const &fixed);
		Fixed				operator + (Fixed const &fixed);
		Fixed				operator - (Fixed const &fixed);
		Fixed				operator * (Fixed const &fixed);
		Fixed				operator / (Fixed const &fixed);
		bool				operator < (Fixed const &fixed);
		bool				operator > (Fixed const &fixed);
		bool				operator <= (Fixed const &fixed);
		bool				operator >= (Fixed const &fixed);
		bool				operator != (Fixed const &fixed);
		bool				operator == (Fixed const &fixed);
		Fixed				operator ++ (int);
		Fixed				operator ++ (void);
		Fixed				operator -- (int);
		Fixed				operator -- (void);

		static Fixed		min(Fixed &fixed_1, Fixed &fixed_2);
		static Fixed const	&min(Fixed const &fixed_1, Fixed const &fixed_2);
		static Fixed		max(Fixed &fixed_1, Fixed &fixed_2);
		static Fixed const	&max(Fixed const &fixed_1, Fixed const &fixed_2);

		int					getRawBits(void) const;
		void				setRawBits(int const raw);

		float				toFloat(void) const;
		int					toInt(void) const;

		static float		round_float(float n);

		~Fixed();
};

std::ostream& operator << (std::ostream &out, Fixed const &fixed);
