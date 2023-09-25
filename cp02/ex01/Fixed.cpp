/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 00:33:46 by aramon            #+#    #+#             */
/*   Updated: 2023/09/26 00:32:08 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const n) : value(n << this->fractionalBits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const n) : value(std::roundf(n * (1 << this->fractionalBits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &f)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

std::ostream& operator << (std::ostream &out, Fixed const &fixed)
{
	out << fixed.toFloat();
	return (out);
}

Fixed &Fixed::operator = (Fixed const &f) throw()
{
	std::cout << "Copy assignation operator called" << std::endl;
	this->value = f.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

int	Fixed::toInt(void) const
{
	return (this->value >> fractionalBits);
}

float Fixed::toFloat(void) const
{
	return ((float)this->value / (float)(1 << this->fractionalBits));
}

float Fixed::round_float(float n)
{
	return (n >= 0) ? std::floor(n + 0.5) : std::ceil(n - 0.5);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
