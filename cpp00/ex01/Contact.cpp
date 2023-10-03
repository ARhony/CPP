/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:43:46 by aramon            #+#    #+#             */
/*   Updated: 2023/09/21 10:41:36 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

void	Contact::setIndex(const int& i)
{
	index = i;
}

void	Contact::setFirstName(const std::string& str)
{
	first_name = str;
}

void	Contact::setLastName(const std::string& str)
{
	last_name = str;
}

void	Contact::setNickName(const std::string& str)
{
	nickname = str;
}

void	Contact::setPhoneNumber(const std::string& str)
{
	phone_number = str;
}

void	Contact::setDarkestSecret(const std::string& str)
{
	darkest_secret = str;
}

int		Contact::getIndex() const
{
	return (index);
}

std::string	Contact::getFirstName() const
{
	return (first_name);
}

std::string	Contact::getLastName() const
{
	return (last_name);
}

std::string	Contact::getNickName() const
{
	return (nickname);
}

std::string	Contact::getPhoneNumber() const
{
	return (phone_number);
}

std::string	Contact::getDarkestSecret() const
{
	return (darkest_secret);
}

Contact::~Contact() {}
