/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 00:01:04 by aramon            #+#    #+#             */
/*   Updated: 2023/09/21 10:32:53 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

void	error()
{
	std::cout << "No params required. Ending." << std::endl;
}

int		request(PhoneBook &ph)
{
	std::string	request;

	std::cout << "Enter the following commands to get started" << std::endl;
	std::cout << "ADD / SEARCH / EXIT" << std::endl;
	std::getline(std::cin, request);
	if (request == "EXIT")
		return (1);
	else if (request == "ADD")
		ph.add();
	else if (request == "SEARCH")
		ph.search();
	else
		std::cout << "Command not found." << std::endl;
	return (0);
}

int	main()
{
	PhoneBook	ph;

	std::cout << std::endl << "PhoneBook management :" << std::endl;
	while (!request(ph))
		;
	return (0);
}
