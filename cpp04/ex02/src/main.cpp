/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 20:53:07 by aramon            #+#    #+#             */
/*   Updated: 2023/09/30 00:19:34 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	int		i = -1;
	AAnimal	*arr_animal[100];

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
