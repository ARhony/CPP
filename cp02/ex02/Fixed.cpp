/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 00:33:46 by aramon            #+#    #+#             */
/*   Updated: 2023/09/25 18:11:17 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0) {}

Fixed::Fixed(int const value)
{
	this->value = value << this->fractionalBits;
}

Fixed::Fixed(float const value)
{
	this->value = roundf(value * (1 << this->fractionalBits));
}

Fixed::Fixed(Fixed const &fixed)
{
	this->value = fixed.getRawBits();
}

int	Fixed::toInt(void) const
{
	return (this->value >> fractionalBits);
}

float Fixed::toFloat(void) const
{
	return ((float)this->value / (float)(1 << fractionalBits));
}

std::ostream& operator << (std::ostream &out, Fixed const &fixed)
{
	out << fixed.toFloat();
	return (out);
}

Fixed	Fixed::operator + (Fixed const &fixed)
{
	Fixed	ret;
	ret.setRawBits(this->value += fixed.getRawBits() >> fractionalBits);
	return (ret);
}

Fixed	Fixed::operator - (Fixed const &fixed)
{
	Fixed	ret;
	ret.setRawBits(this->value -= fixed.getRawBits() >> fractionalBits);
	return (ret);
}

Fixed	Fixed::operator / (Fixed const &fixed)
{
	Fixed	ret;
	ret.setRawBits(this->value /= fixed.getRawBits() >> fractionalBits);
	return (ret);
}

Fixed	Fixed::operator * (Fixed const &fixed)
{
	Fixed	ret;
	ret.setRawBits(this->value *= fixed.getRawBits() >> fractionalBits);
	return (ret);
}

bool	Fixed::operator == (Fixed const &fixed)
{
	if (this->value == fixed.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator != (Fixed const &fixed)
{
	return (!(*this == fixed));
}

bool	Fixed::operator >= (Fixed const &fixed)
{
	if (this->value >= fixed.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator <= (Fixed const &fixed)
{
	if (this->value <= fixed.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator > (Fixed const &fixed)
{
	if (this->value > fixed.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator < (Fixed const &fixed)
{
	if (this->value < fixed.getRawBits())
		return (true);
	return (false);
}

Fixed	Fixed::operator ++ (int)
{
	Fixed tmp(*this);
	this->value++;
	return (tmp);
}

Fixed	Fixed::operator ++ ()
{
	this->value++;
	return (*this);
}

Fixed	Fixed::operator -- (int)
{
	Fixed tmp(*this);
	this->value--;
	return (tmp);
}

Fixed	Fixed::operator -- ()
{
	this->value--;
	return (*this);
}

Fixed	Fixed::min(Fixed &fixed_1, Fixed &fixed_2)
{
	if (fixed_1.getRawBits() <= fixed_2.getRawBits())
		return (fixed_1);
	return (fixed_2);
}

Fixed const &Fixed::min(Fixed const &fixed_1, Fixed const &fixed_2)
{
	if (fixed_1.getRawBits() <= fixed_2.getRawBits())
		return (fixed_1);
	return (fixed_2);
}

Fixed	Fixed::max(Fixed &fixed_1, Fixed &fixed_2)
{
	if (fixed_1.getRawBits() > fixed_2.getRawBits())
		return (fixed_1);
	return (fixed_2);
}

Fixed	const &Fixed::max(Fixed const &fixed_1, Fixed const &fixed_2)
{
	if (fixed_1.getRawBits() > fixed_2.getRawBits())
		return (fixed_1);
	return (fixed_2);
}

Fixed	&Fixed::operator = (Fixed const &fixed)
{
	this->value = fixed.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

Fixed::~Fixed()
{
}
