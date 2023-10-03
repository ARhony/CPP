/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:48:25 by aramon            #+#    #+#             */
/*   Updated: 2023/09/29 20:14:48 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	private:

	public:

		Dog();
		Dog(const std::string &n);
		Dog(const Dog &d);
		Dog &operator=(const Dog &d);

		void makeSound(void) const;

		~Dog();
};

#endif
