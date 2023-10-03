/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 20:53:07 by aramon            #+#    #+#             */
/*   Updated: 2023/09/30 00:07:40 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	int		i = -1;
	Animal	*arr_animal[100];

	// Fill all animals
	while (++i < 100)
	{
		if (i < 50)
			arr_animal[i] = new Dog();
		else
			arr_animal[i] = new Cat();
		std::cout << "-----------------" << std::endl;
	}

	// Clean all animals
	while (--i > -1)
		delete (arr_animal[i]);
}
