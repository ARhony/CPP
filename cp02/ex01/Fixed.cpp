/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 00:33:46 by aramon            #+#    #+#             */
/*   Updated: 2023/09/25 01:37:07 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const value)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = value << this->fractionalBits;
}

Fixed::Fixed(float const value)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(value * (1 << this->fractionalBits));
}

int	Fixed::toInt(void) const
{
	return (this->value >> fractionalBits);
}

float Fixed::toFloat(void) const
{
	return ((float)this->value / (float)(1 << this->fractionalBits));
}

Fixed::Fixed(Fixed const &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

std::ostream& operator << (std::ostream &out, Fixed const &fixed)
{
	out << fixed.toFloat();
	return (out);
}

Fixed &Fixed::operator = (Fixed const &fixed)
{
	std::cout << "Copy assignation operator called" << std::endl;
	this->value = fixed.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
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
