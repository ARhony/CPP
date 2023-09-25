/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:48:34 by aramon            #+#    #+#             */
/*   Updated: 2023/09/25 19:34:09 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <sstream>

PhoneBook::PhoneBook() : iSizeCurrent(0), iSizeMax(8) {}

void	PhoneBook::add()
{
	int			i;
	std::string	str;

	i = this->iSizeCurrent % this->iSizeMax;

	std::cout << "First name ?" << std::endl;
	std::getline(std::cin, str);
	this->contacts[i].setFirstName(str);

	std::cout << "Last name ?" << std::endl;
	std::getline(std::cin, str);
	this->contacts[i].setLastName(str);

	std::cout << "Nickname ?" << std::endl;
	std::getline(std::cin, str);
	this->contacts[i].setNickName(str);

	std::cout << "Phone number ?" << std::endl;
	std::getline(std::cin, str);
	this->contacts[i].setPhoneNumber(str);

	std::cout << "Darkest secret ?" << std::endl;
	std::getline(std::cin, str);
	this->contacts[i].setDarkestSecret(str);

	this->iSizeCurrent++;

	this->iOldestIndex = this->iSizeCurrent > this->iSizeMax ?
		iSizeCurrent % iSizeMax : 0;

	this->contacts[i].setIndex(i);
}

std::string		format(const std::string str)
{
	int			i = 0;
	int			j = 0;
	int			size = str.size();
	int			blank = 10 - size;
	std::string	ret = "          ";

	while (i < blank)
		i++;
	while (i < 10)
	{
		if (blank <= 0 && i == 9)
			ret[i] = '.';
		else
			ret[i] = str[j];
		i++;
		j++;
	}
	return (ret);
}

bool	is_search_index_valid(std::string search)
{
	int		i = 0;

	if (search.empty())
		return (false);
	while (search[i])
	{
		if (search[i] == '-' || !isdigit(search[i]))
			return (false);
		i++;
	}
	return (true);
}

void	PhoneBook::search()
{
	std::string			index_search = "-1";
	std::stringstream	ss;
	int					index = 0;
	int					index_max;

	if (this->iSizeCurrent > 0)
	{
		std::cout << "     Index|     First|      Last|      Nick" << std::endl;
		while (index < this->iSizeCurrent)
		{
			ss << this->contacts[index].getIndex();
			std::cout << format(ss.str()) << "|";
			std::cout << format(this->contacts[index].getFirstName()) << "|";
			std::cout << format(this->contacts[index].getLastName()) << "|";
			std::cout << format(this->contacts[index].getNickName()) << std::endl;
			ss.str("");
			index++;
			if (index > this->iSizeMax - 1)
				break ;
		}
		std::cout << "Insert index to display contact. Type CANCEL to stop." << std::endl;
		while (1)
		{
			std::getline(std::cin, index_search);
			if (index_search == "CANCEL")
				break ;
			else if (is_search_index_valid(index_search))
			{
				index = std::stoi(index_search);
				index_max = this->iSizeCurrent > this->iSizeMax ? this->iOldestIndex : this->iSizeCurrent;
				if (index >= this->iSizeMax)
					std::cout << "Please insert index between 0 and 7. Type CANCEL to stop." << std::endl;
				else if (index < index_max)
				{
					std::cout << "\nFirst name     :" + this->contacts[index].getFirstName() << std::endl;
					std::cout << "Last name      :" + this->contacts[index].getLastName() << std::endl;
					std::cout << "Nickname       :" + this->contacts[index].getNickName() << std::endl;
					std::cout << "Phone number   :" + this->contacts[index].getPhoneNumber() << std::endl;
					std::cout << "Darkest secret :" + this->contacts[index].getDarkestSecret() << std::endl;
					std::cout << std::endl;
					break ;
				}
				else
					std::cout << "No contact registered at this index." << std::endl;
			}
			else
				std::cout << "Please insert index between 0 and 7. Type CANCEL to stop." << std::endl;
		}
	}
	else
		std::cout << "No contact found." << std::endl;
}

PhoneBook::~PhoneBook() {}
