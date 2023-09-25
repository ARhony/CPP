/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:11:53 by aramon            #+#    #+#             */
/*   Updated: 2023/09/21 13:40:04 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int		main()
{
	std::string		stringVAL = "HI THIS IS BRAIN";
	std::string		*stringPTR = &stringVAL;
	std::string		&stringREF = stringVAL;

	std::cout << "\nMemory addresses:" << std::endl;
	std::cout << "stringVAL: ";
	std::cout << &stringVAL << std::endl;
	std::cout << "stringPTR: ";
	std::cout << &stringPTR << std::endl;
	std::cout << "stringREF: ";
	std::cout << &stringREF << std::endl;

	std::cout << "\nValues:" << std::endl;
	std::cout << "stringVAL: ";
	std::cout << stringVAL << std::endl;
	std::cout << "stringPTR: ";
	std::cout << *stringPTR << std::endl;
	std::cout << "stringREF: ";
	std::cout << stringREF << std::endl;

	return (0);
}
