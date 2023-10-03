/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:48:25 by aramon            #+#    #+#             */
/*   Updated: 2023/09/30 00:20:18 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
	private:
		Brain	*_brain;

	public:
		Dog();
		Dog(const std::string &n);
		Dog(const Dog &d);
		Dog &operator=(const Dog &d);

		void makeSound(void) const;

		~Dog();
};

#endif
