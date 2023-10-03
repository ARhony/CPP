/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 00:55:46 by aramon            #+#    #+#             */
/*   Updated: 2023/10/03 01:15:06 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int		main(void)
{
	Bureaucrat	bob("Bob", 150);
	Bureaucrat	jim("Jim", 1);

	std::cout << bob << std::endl;
	std::cout << jim << std::endl;
	try
	{
		bob.incrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		jim.decrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << bob << std::endl;
	std::cout << jim << std::endl;
	return (0);
}

