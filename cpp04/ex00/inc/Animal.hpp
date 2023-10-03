/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:07:28 by aramon            #+#    #+#             */
/*   Updated: 2023/09/29 20:15:08 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
	protected:

		std::string		_type;

	public:

		Animal();
		Animal(const std::string &type);
		Animal(const Animal &a);
		Animal &operator = (const Animal &a);

		virtual const std::string	getType(void) const;
		virtual void				makeSound(void) const;

		~Animal();
};

#endif
